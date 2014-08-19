class Solution {
public:
    double pow(double x, int n) {
        vector<bool> square;
        int m = abs(n);
        while (m > 0) {
            if (m % 2 == 0) {
                square.push_back(true);
                m /= 2;
            } else {
                square.push_back(false);
                m -= 1;
            }
        }
        double result = 1;
        while (!square.empty()) {
            if (square.back() == true) {
                result *= result;
            } else {
                result *= x;
            }
            square.pop_back();
        }
        if (n < 0) {
            result = 1 / result;
        }
        return result;
    }
};
