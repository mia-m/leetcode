class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        set<int> row;
        set<int> col;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for (set<int>::iterator it = row.begin(); it != row.end(); ++it) {
            for (int j = 0; j < cols; j++) {
                matrix[*it][j] = 0;
            }
        }
        
        for (set<int>::iterator it = col.begin(); it != col.end(); ++it) {
            for (int i = 0; i < rows; i++) {
                matrix[i][*it] = 0;
            }
        }
    }
};
