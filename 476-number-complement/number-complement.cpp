class Solution {
public:
    int findComplement(int num) {
        // Convert num to binary
        int q;
        string r;

        while (num > 0) {
            q = num % 2;
            r += (q + '0');
            num /= 2;
        }

        reverse(r.begin(), r.end());

        // Flip bits
        for (char &c : r) {      // <-- use reference (&)
            c = (c == '0') ? '1' : '0';
        }

        // Convert binary back to decimal
        int sum = 0;
        int i = 0;

        for (int j = r.size() - 1; j >= 0; j--) {
            sum += (r[j] - '0') * (1 << i);
            i++;
        }

        return sum;
    }
};