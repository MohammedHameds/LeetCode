class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int sum, temp = 0;

        while (i >= 0 || j >= 0)
        {
            sum = temp;

            // Ascii arithmetic for 0 is 30 and asciarithmetic for 1 is 31
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            result = to_string(sum % 2) + result;
            temp = sum / 2;
        }

        if (temp != 0) result = "1" + result;

        return result;
    }
};