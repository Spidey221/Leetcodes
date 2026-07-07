class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = "";
        long long sum = 0;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                s += char(digit + '0');
                sum += digit;
            }

            n /= 10;
        }

        reverse(s.begin(), s.end());

        long long x = 0;

        for (char c : s) {
            x = x * 10 + (c - '0');
        }

        return x * sum;
    }
};