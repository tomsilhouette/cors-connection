using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Text;

namespace SilhouetteCore.Common;

public sealed class SCHttpManager : IDisposable
{
    private const int MaxSockets = 10;
    private readonly HttpClient http;
    private readonly SemaphoreSlim semaphore;
    private readonly StreamWriter? logWriter;
    private bool isDisposed;

    public SCHttpManager(string logName)
    {
        http = new HttpClient();
        semaphore = new(MaxSockets, MaxSockets);

        if(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData) is string appData && !string.IsNullOrEmpty(appData))
        {
            string schedulerLogFolder = Path.Combine(appData, "Silhouette America", "Silhouette Create", "Logs");
            string schedulerLogFile = $"{logName}_{DateTime.Now:yyyyMMddTHHmmss}.log";

            Directory.CreateDirectory(schedulerLogFolder);
            var combinedPath = Path.Combine(schedulerLogFolder, schedulerLogFile);
            logWriter = new(combinedPath, false, Encoding.UTF8);
        }
    }

    public async Task<Stream> GetStreamAsync(string url, CancellationToken token = default)
    {
        token.ThrowIfCancellationRequested();

        HttpRequestMessage request = new()
        {
            Method = HttpMethod.Get,
            RequestUri = new Uri(url),
        };

        HttpResponseMessage response = await SendAsync(request, token);
        token.ThrowIfCancellationRequested();

        return await response.Content.ReadAsStreamAsync(token);
    }

    public async Task<HttpResponseMessage> SendAsync(HttpRequestMessage request, CancellationToken token = default)
    {
        ArgumentNullException.ThrowIfNull(request.RequestUri);
        
        await semaphore.WaitAsync(token);
        try
        {
            token.ThrowIfCancellationRequested();

#if DEBUG
            string logId = SCUtils.GenerateDecimalUuid(6);
            await LogHttpRequest(logId, request);
#endif
            HttpResponseMessage value = await http.SendAsync(request, token);
            token.ThrowIfCancellationRequested();
#if DEBUG
            await LogHttpResponse(logId, request.RequestUri!, value);
#endif
            return value;
        }
        finally
        {
            semaphore.Release();
        }
    }

    private async Task LogHttpRequest(string logId, HttpRequestMessage request)
    {
        if (logWriter is null)
        {
            return;
        }

        StringBuilder sb = new();
        sb.AppendLine($"--- HTTP Outgoing Request #{logId} ---");
        sb.AppendLine($"-> {request.RequestUri}");
        sb.AppendLine($"M  {request.Method}");
        sb.AppendLine($"@  {DateTime.Now:R}");
        sb.AppendLine();
        if (request.Headers.Any())
        {
            sb.AppendLine("Headers:");
            foreach (var (key, values) in request.Headers)
            {
                sb.AppendLine($"- {key}: {string.Join(" | ", values)}".Trim());
            }
            sb.AppendLine();
        }
        if (request.Content is HttpContent validContent)
        {
            byte[] byteContent = await validContent.ReadAsByteArrayAsync();
            try
            {
                JObject jsonContent = JObject.Parse(Encoding.UTF8.GetString(byteContent));
                sb.AppendLine("Content: (JSON)");
                sb.AppendLine(jsonContent.ToString());
            }
            catch (JsonReaderException)
            {
                sb.AppendLine("Content: (Base64)");
                sb.AppendLine(Convert.ToBase64String(byteContent));
            };
            sb.AppendLine();
        }
        sb.AppendLine();
        lock (logWriter)
        {
            logWriter.Write(sb.ToString());
            logWriter.Flush();
        }
    }

    private async Task LogHttpResponse(string logId, Uri endpointUri, HttpResponseMessage response)
    {
        if(logWriter is null)
        {
            return;
        }

        StringBuilder sb = new();
        sb.AppendLine($"--- HTTP Incoming Response #{logId} ---");
        sb.AppendLine($"<- {endpointUri}");
        sb.AppendLine($"S  {(int)response.StatusCode} {response.StatusCode}");
        sb.AppendLine($"@  {DateTime.Now:R}");
        sb.AppendLine();
        if (response.Headers.Any())
        {
            sb.AppendLine("Headers:");
            foreach (var header in response.Headers.Concat(response.Content.Headers))
            {
                sb.AppendLine($"- {header.Key}: {string.Join(", ", header.Value)}".Trim());
            }
            sb.AppendLine();
        }
        if (response.Content is HttpContent validContent)
        {
            byte[] byteContent = await validContent.ReadAsByteArrayAsync();
            try
            {
                JObject jsonContent = JObject.Parse(Encoding.UTF8.GetString(byteContent));
                sb.AppendLine("Content: (JSON)");
                sb.AppendLine(jsonContent.ToString());
            }
            catch (JsonReaderException)
            {
                sb.AppendLine("Content: (Base64)");
                sb.AppendLine(Convert.ToBase64String(byteContent));
            };
            sb.AppendLine();
        }
        lock (logWriter)
        {
            logWriter.Write(sb.ToString());
            logWriter.Flush();
        }
    }

    private void Dispose(bool disposing)
    {
        if (!isDisposed)
        {
            if (disposing)
            {
                // TODO: dispose managed state (managed objects)
            }

            http.Dispose();
            logWriter?.Dispose();
            isDisposed = true;
        }
    }

    ~SCHttpManager()
    {
        Dispose(disposing: false);
    }

    public void Dispose()
    {
        Dispose(disposing: true);
        GC.SuppressFinalize(this);
    }

    private static readonly Lazy<SCHttpManager> defaultManager = new(() => new SCHttpManager("DefaultHttpManager"));
    public static SCHttpManager Default => defaultManager.Value;
}