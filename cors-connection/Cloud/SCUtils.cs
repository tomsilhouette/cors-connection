using System.Security.Cryptography;
using System.Text;

namespace SilhouetteCore.Common;

public static class SCUtils
{
    public static string HexSHA1(byte[] data) => SHA1.HashData(data).ToHex();
    public static string HexSHA1(string data) => SHA1.HashData(Encoding.UTF8.GetBytes(data)).ToHex();
    public static string HexSHA1(string data, Encoding encoding) => SHA1.HashData(encoding.GetBytes(data)).ToHex();

    public static string ToHex(this byte[] data)
    {
        StringBuilder hashString = new();
        foreach (byte c in data)
        {
            hashString.AppendFormat("{0:x2}", c);
        }

        return hashString.ToString();
    }

    public static string GeneratedHexUuid(int length)
    {
        byte[] bytes = new byte[length];
        RandomNumberGenerator.Create().GetBytes(bytes);
        return bytes.ToHex();
    }

    public static string GenerateDecimalUuid(int length)
    {
        StringBuilder str = new();
        for (int i = 0; i < length; i++)
        {
            str.AppendFormat("{0:D1}", Random.Shared.Next(0, 10));
        }
        return str.ToString();
    }
}
