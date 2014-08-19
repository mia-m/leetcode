class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size() + 1;
        int last = rows - 1;
        for (int i = 0; i < rows/2; i++) {
            for (int j = 0; j < cols/2; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[last-j][i];
                matrix[last-j][i] = matrix[last-i][last-j];
                matrix[last-i][last-j] = matrix[j][last-i];
                matrix[j][last-i] = tmp;
            }
        }
    }
};
