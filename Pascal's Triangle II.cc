class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        for (int i = 0; i <= rowIndex; i++) {
            row.push_back(combination(rowIndex, i));
        }
        return row;
    }
    
    int combination(int n, int k) {
        if (n == k) {
            return 1;
        }
        int i = n - k + 1;
        int j = 1;
        long long result = 1;
        while (i <= n && j <= k) {
            if (result % j == 0) {
                result /= j;
                j++;
            } else {
                result *= i;
                i++;
            }
        }
        while (j <= k) {
            result /= j;
            j++;
        }
        while (i <= n) {
            result *= i;
            i++;
        }
        return (int) result;
    }
};
