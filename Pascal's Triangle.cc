class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> triangle;
        int n = numRows;
        triangle.resize(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i+1; j++) {
                triangle[i].push_back(combination(i, j));
            }
        }
        return triangle;
    }
    
    int combination(int n, int k) {
        if (n == k) {
            return 1;
        }
        int i = n - k + 1;
        int j = 1;
        int result = 1;
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
        return result;
    }
};
