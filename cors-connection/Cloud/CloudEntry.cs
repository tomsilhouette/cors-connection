using Newtonsoft.Json;
using System.Globalization;
using System.Text;

namespace SilhouetteCore.Cloud;

public enum CloudEntryType
{
    Purchased,
    UserCreated,
    Folder,
    SpecialFolder,
    Local,
    Invalid
}

[Flags]
public enum CloudEntryParamFlags : int
{
   Favourite = 1,
   Read = 2,
   LocalOnly = 16,
   InRecycleBin = 32,
   MigratedToCloud = 64,
   MigratedToHd = 128,
}

public static class CloudEntryTypeExt
{
    public static bool IsFile(this CloudEntryType type)
        => type is CloudEntryType.Purchased or CloudEntryType.UserCreated or CloudEntryType.Local;

    public static bool IsFolder(this CloudEntryType type)
        => type is CloudEntryType.Folder or CloudEntryType.SpecialFolder;
}

public class CloudEntryJsonConverter : JsonConverter<CloudEntry>
{
    public override CloudEntry? ReadJson(JsonReader reader, Type objectType, CloudEntry? existingValue, bool hasExistingValue, JsonSerializer serializer)
    {
        return serializer.Deserialize(reader) is string raw ? new CloudEntry(raw) : null;
    }

    public override void WriteJson(JsonWriter writer, CloudEntry? value, JsonSerializer serializer)
    {
        serializer.Serialize(writer, value?.ToString());
    }
}

public class CloudSpecialFolders
{
    // TODO: Populate the rest of the special folders
    public const string Library = "1000000000002";
    public const string RecentDownloads = "1000000000003";
    public const string UserDesigns = "1000000000004";
    public const string Root = "1000000000006";
}

[JsonConverter(typeof(CloudEntryJsonConverter))]
public class CloudEntry
{
    private const string AdditionalParamsKey = "additional_params";
    
    private static Stack<string> EmptyFolderStack => new(new List<string>() { CloudSpecialFolders.Root });

    [JsonIgnore]
    public string Id { get; private set; }
    [JsonIgnore]
    public string Path { get; private set; }
    [JsonIgnore]
    public Dictionary<string, object> Variables { get; private set; }
    [JsonIgnore]
    public CloudEntryType Type { get; private set; }
    public string Raw { get => GetRaw(); set => Populate(value); }

    public CloudEntryParamFlags? AdditionalParams
    {
        get
        {
            if (Variables.TryGetValue(AdditionalParamsKey, out object? v) && int.TryParse((string)v, out int flags))
            {
                return (CloudEntryParamFlags)flags;
            }
            return null;
        }
    }

    public bool IsFavourite => AdditionalParams?.HasFlag(CloudEntryParamFlags.Favourite) ?? false;
    public Stack<string> FolderStack => lazyFolderStack.Value;

    private Lazy<Stack<string>> lazyFolderStack = new(EmptyFolderStack);

    public CloudEntry(string raw)
    {
        Id = string.Empty;
        Path = string.Empty;
        Variables = [];

        Populate(raw);
        Init();
    }

    internal CloudEntry(string id, string path, Dictionary<string, object> variables, CloudEntryType type)
    {
        Id = id;
        Path = path;
        Variables = new(variables);
        Type = type;

        Init();
    }

    public CloudEntry(CloudEntry toCopy)
        : this(toCopy.Id, toCopy.Path, new(toCopy.Variables), toCopy.Type)
    {
    
    }

    private void Init()
    {
        lazyFolderStack = new(() =>
        {
            if (Id is CloudSpecialFolders.Root)
            {
                return [];
            }

            Stack<string> stack = EmptyFolderStack;

            string[] parts = Path.Split('/');
            foreach (string part in parts)
            {
                string[] split = part.Split(':');
                stack.Push(split.Length > 1 ? split[1] : part);
            }
            stack.TryPop(out var _); // Remove the name
            if (Type.IsFolder()) stack.TryPop(out var _); // If a folder also remove the folder name
            return stack;
        });
    }

    private void Populate(string raw)
    {
        string[] split = raw.Split('|');
        Id = split[0].Trim();
        Path = split[2].Trim();
        Type = GetEntryType(Id);

        Variables.Clear();
        foreach(string item in split[1].Split('/'))
        {
            string[] kvSplit = item.Split('=');
            if (kvSplit.Length < 2) continue;

            string varValue = DecodeString(kvSplit[1].Replace("%25", "%"));
        }
    }

    private static readonly char[] separators = ['%', ',', '|', '=', '/', ':', '\n', '\r'];

    private static string EncodeString(string input)
    {
        int pos = input.IndexOfAny(separators);
        if (pos == -1) return input.Replace('\0', ',');
        StringBuilder sb = new(input, 0, pos, pos + (input.Length - pos) * 3);
        for (; pos != -1 && pos < input.Length; ++pos)
        {
            if (Array.IndexOf(separators, input[pos]) != -1)
            {
                sb.AppendFormat("%{0:X2}", (int)input[pos]);
            }
            else if (input[pos] == '\0')
            {
                sb.Append(',');
            }
            else
            {
                sb.Append(input[pos]);
            }
        }
        return sb.ToString();
    }

    private static string DecodeString(string input)
    {
        int pos = input.IndexOf('%');
        if (pos == -1) return input.Replace(',', '\0');
        StringBuilder sb = new(input, 0, pos, input.Length);

        for (; pos < input.Length; ++pos)
        {
            if (input[pos] == '%' && pos + 2 < input.Length)
            {
                if (int.TryParse(input.AsSpan(pos + 1, 2), NumberStyles.HexNumber, CultureInfo.InvariantCulture, out int hex))
                {
                    char c = (char)hex;
                    int sep = Array.IndexOf(separators, c);
                    if (sep != -1)
                    {
                        sb.Append(c);
                        pos += 2;
                        continue;
                    }
                }
            }
            else if (input[pos] == ',') //array elements separator
            {
                sb.Append('\0');
            }
            else
            {
                sb.Append(input[pos]);
            }
        }
        return sb.ToString();
    }

    // For the strings below, reconsider whether storing or calculating them is more beneficial.
    // With larger indices (>100K entries) storing them can take up a lot of memory.

    public string GetRaw()
    {
        StringBuilder sb = new();
        sb.Append($"{Id}|");
        foreach (var (k, v) in Variables)
        {
            sb.Append($"{k}={EncodeString(v.ToString() ?? string.Empty)}/");
        }
        if (Variables.Count > 0) sb.Remove(sb.Length - 1, 1);
        sb.Append($"|{Path}");

        return sb.ToString();
    }

    public override string ToString() => GetRaw();

    public string GetName()
    {
        return Type.IsFolder() ?
            Path.Split('/').SkipLast(1).LastOrDefault()?.Split(':')?.FirstOrDefault() ?? "N/A" :
            Path[(Path.LastIndexOf('/') + 1)..].Split(':')[0];
    }

    private static CloudEntryType GetEntryType(string id) => id.Length switch
    {
        0 => CloudEntryType.Invalid,
        _ when id.StartsWith('L') => CloudEntryType.Local,
        < 12 => CloudEntryType.Purchased,
        13 => CloudEntryType.SpecialFolder,
        30 => CloudEntryType.Folder,
        32 => CloudEntryType.UserCreated,
        _ => CloudEntryType.Invalid
    };
    
    public static implicit operator CloudEntry(string data) => new(data); // Used to deserialise from JSON in CloudOperations

    public static CloudEntry CreateEntry(CloudEntry folder, string id, string name, Dictionary<string, object> variables)
    {
        if (!folder.Type.IsFolder()) throw new ArgumentException("Provided argument is not a valid folder entry", nameof(folder));

        string folderPath = folder.Path.Replace(".", $"{EncodeString(name)}:{id}");
        return new CloudEntry(id, folderPath, variables, CloudEntryType.UserCreated);
    }
}
