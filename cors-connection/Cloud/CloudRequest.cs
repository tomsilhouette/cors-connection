namespace SilhouetteCore.Cloud;

internal class CloudAuth(string id, string password)
{
    public string Id { get; set; } = id;
    public string Password { get; set; } = password;
}

internal class CloudMethod(string methodName, dynamic parameters)
{
    public string MethodName { get; set; } = methodName;
    public dynamic Parameters { get; set; } = parameters;
}

internal class CloudRequest(string? authId, string methodName, dynamic parameters)
{
    public CloudAuth Authentication { get; set; } = new(authId ?? "sos_api", string.Empty);
    public CloudMethod Method { get; set; } = new(methodName, parameters);
}

internal record RequestAuthUser(string Email, string Password);
internal record CloudReqCompare(string Email, string Password, string DeviceHash, string DeviceName, string IndexHash);
internal record CloudRequest_CompareAndMerge(string Email, string Password, string DeviceHash, string DeviceName, CloudDiff Diff, string IndexHash, string NewIndexHash, bool QueryMissingPurchases = false);
