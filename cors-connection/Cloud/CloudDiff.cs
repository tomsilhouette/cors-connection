using Newtonsoft.Json;

namespace SilhouetteCore.Cloud;

public class CloudDiff
{
    public List<CloudEntry> Additions { get; init; } = [];
    public List<CloudEntry> Deletions { get; init; } = [];
    public List<CloudEntry> Moves { get; init; } = [];

    public CloudDiff() { }

    public CloudDiff(CloudDiff copy)
    {
        Additions = copy.Additions.Select(x => new CloudEntry(x)).ToList();
        Deletions = copy.Deletions.Select(x => new CloudEntry(x)).ToList();
        Moves = copy.Moves.Select(x => new CloudEntry(x)).ToList();
    }

    [JsonIgnore]
    public bool IsEmpty => Additions.Count == 0 && Deletions.Count == 0 && Moves.Count == 0;

    public override string ToString()
    {
        return $"CloudDiff[+{Additions.Count},-{Deletions.Count},>{Moves.Count}]";
    }

    public static CloudDiff Empty => new();
}
