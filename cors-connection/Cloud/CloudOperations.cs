using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using SilhouetteCore.Common;
using System.Diagnostics;
using System.Text;

namespace SilhouetteCore.Cloud;

internal class CloudOperations
{
    private const string AuthId = "sos_api";
    private const string ApiEndpoint = "https://api.silhouettedesignstore.com";//"https://api.silhouettedesignstore.com" https://apistaging2.silhouettedesignstore.com/  http://localhost:8888/proxy-connection;

    internal record CloudResultCompareMerge(CloudDiff Diff, string IndexHash, string NewIndexHash, int MaxSendBitsPerSecond, string[] RequestedFiles, float TotalBytesAllowed, float TotalBytesUsed, int SyncInterval);
    internal record CloudResultMerge(CloudDiff Diff, string IndexHash, string NewIndexHash);
    internal record CloudResultAuthenticate(string Token, int UserId);

    internal static async Task<CloudResultAuthenticate> RequestAuthenticateAsync(SCHttpManager httpManager, string email, string password, CancellationToken token = default)
    {
        ArgumentNullException.ThrowIfNull(httpManager);
        ArgumentException.ThrowIfNullOrEmpty(email);
        ArgumentException.ThrowIfNullOrEmpty(password);

        dynamic param = new
        {
            email,
            password
        };

        token.ThrowIfCancellationRequested();

        try
        {
            string content = AuthentificateRequest(new CloudRequest(AuthId, "authenticate_user", param));
            JObject response = await PostContent(httpManager, content, token);

            response.SelectTokenAs<CloudRequestStatus>("status_code")?.EnsureSuccessStatusCode();

            return new CloudResultAuthenticate
            (
                Token: response.SelectTokenAs<string>("data.token") ?? string.Empty,
                UserId: response.SelectTokenAs<int>("data.user_id")
            );
        }
        catch (Exception ex)
        {
            // Log the exception or handle it accordingly
            Console.WriteLine($"An error occurred: {ex.Message}");

            // Optionally, return a default or error result
            return new CloudResultAuthenticate
            (
                Token: string.Empty,
                UserId: -1 // Indicate an error with a special value
            );
        }
    }


    // HELPERS
    private static string AuthentificateRequest(CloudRequest requestObject)
    {
        requestObject.Authentication.Password = CloudUtils.CreatePw();
        string json = JsonConvert.SerializeObject(requestObject, CloudUtils.DefaultSerializerSettings);
        return json.Replace(requestObject.Authentication.Password, SCUtils.HexSHA1(json));
    }


    /// <exception cref="HttpRequestException"/>
    private static async Task<JObject> PostContent(SCHttpManager httpManager, string content, CancellationToken token = default)
    {
        token.ThrowIfCancellationRequested();

        HttpRequestMessage request = new()
        {
            Method = HttpMethod.Post,
            RequestUri = new Uri(ApiEndpoint),
            Content = new StringContent(content, Encoding.UTF8, "application/octet-stream"),
        };


        HttpResponseMessage response = await httpManager.SendAsync(request, token);
        string text = await response.Content.ReadAsStringAsync(token);

        JObject responseObject = string.IsNullOrEmpty(text) ? [] : JObject.Parse(text);
        return responseObject;   
    }
}