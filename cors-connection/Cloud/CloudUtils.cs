using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Serialization;
using System.Net;
using System.Security.Cryptography;
using System.Text;

namespace SilhouetteCore.Cloud;

public enum CloudMergeType
{
    /// <summary>
    /// No merge required.
    /// </summary>
    None,
    /// <summary>
    /// The server needs to be updated with new information from the client.
    /// </summary>
    ClientFastForward,
    /// <summary>
    /// The client needs to be updated with new information from the server.
    /// </summary>
    ServerFastForward,
    /// <summary>
    /// Both the client and the server need to be with updated with new information from each other.
    /// </summary>
    ThreeWay
}

public class CloudRequestStatus(int code)
{
    public const int TooManyActiveDevices = 550;
    public const int TooManyTotalDevices = 551;
    public const int BrokenDiff = 552;
    public const int InsufficientStorage = 553;
    public const int MissingData = 554;
    public const int PasswordsMismatch = 555;
    public const int IncorrectlyFormattedEmail = 556;
    public const int ValueAlreadyExists = 557;
    public const int OutOfRangeValue = 558;
    public const int UnexpectedAncestorHash = 559;
    public const int UnexpectedPostMergeHash = 560;
    public const int InvalidFileSize = 561;
    public const int FileChunkIndexOutOfRange = 562;

    public int StatusCode { get; } = code;

    public static implicit operator CloudRequestStatus(int code) => new(code);
    public static implicit operator CloudRequestStatus(string codeStr) => new(int.Parse(codeStr));

    public override string ToString()
    {
        if (Enum.IsDefined(typeof(HttpStatusCode), StatusCode))
            return ((HttpStatusCode) StatusCode).ToString();

        return StatusCode switch
        {
            TooManyActiveDevices => nameof(TooManyActiveDevices),
            TooManyTotalDevices => nameof(TooManyTotalDevices),
            BrokenDiff => nameof(BrokenDiff),
            InsufficientStorage => nameof(InsufficientStorage),
            MissingData => nameof(MissingData),
            PasswordsMismatch => nameof(PasswordsMismatch),
            IncorrectlyFormattedEmail => nameof(IncorrectlyFormattedEmail),
            ValueAlreadyExists => nameof(ValueAlreadyExists),
            OutOfRangeValue => nameof(OutOfRangeValue),
            UnexpectedAncestorHash => nameof(UnexpectedAncestorHash),
            UnexpectedPostMergeHash => nameof(UnexpectedPostMergeHash),
            InvalidFileSize => nameof(InvalidFileSize),
            FileChunkIndexOutOfRange => nameof(FileChunkIndexOutOfRange),
            _   => "Unknown"
        };
    }

    public void EnsureSuccessStatusCode()
    {
        if (StatusCode < 200 || StatusCode > 299)
            throw new CloudRequestException(StatusCode, ToString());
    }
}

public class CloudRequestException(int statusCode, string message) : Exception($"Cloud request error: {statusCode} {message}")
{ 
    public int StatusCode { get; } = statusCode;
    public string StatusMessage { get; } = message;
}

public static partial class CloudUtils
{
    /// <summary>
    /// This might need to be looked at again for safety - current using the PW generation method from Silhouette Go.
    /// </summary>
    private static readonly string[] slices = ["UOCjn", "{t\\K_]|{]l|", "XCgdFCOroCe[nd", "l\\{qgS", "MJQUJn|xWXvAPX", "SicaN", "\\wItxsSCfC", "FadP{Vj^", "QRBLIBHCYv", "emfdZ"];

    internal static string CreatePw(int index = 0)
    {
        StringBuilder pw = new(slices.Length * 2);
        foreach (string slice in slices)
        {
            byte[] bs = Encoding.ASCII.GetBytes(slice);
            byte[] hash = SHA1.HashData(bs);
            pw.Append((char)hash[index]);
            pw.Append((char)hash[index + 1]);
        }

        return pw.ToString();
    }

    internal static readonly JsonSerializerSettings DefaultSerializerSettings = new()
    {
        MissingMemberHandling = MissingMemberHandling.Ignore,
        NullValueHandling = NullValueHandling.Ignore,
        Formatting = Formatting.Indented,
        ContractResolver = new DefaultContractResolver
        {
            NamingStrategy = new SnakeCaseNamingStrategy()
        }
    };

    internal static T? SelectTokenAs<T>(this JToken parentTkn, string path)
    {
        if (parentTkn.SelectToken(path) is JToken tkn)
        {
            return tkn.ToObject<T>();
        }
        return default;
    }

    private static readonly Random rnd = new();
}