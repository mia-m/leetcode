class Solution {
public:
    int reverse(int x) {
        int num = abs(x);
        vector<int> digit;
        while (num > 0) {
            digit.push_back(num % 10);
            num /= 10;
        }
        int n = digit.size();
        int y = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                y *= 10;
            }
            y += digit[i];
        }
        if (x < 0) {
            y *= -1;
        }
        return y;
    }
};
