class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        vector<vector<string>> results;
        vector<string> solution;
        solution.resize(n);
        
        for (int i = 0; i < n; i++) {
            solution[i] = string(n, '.');
        }
        solve(n, 0, solution, results);
        return results;
    }
    
    void solve(int n, int queen, vector<string> &solution, vector<vector<string>> &results) {
        for (int col = 0; col < n; col++) {
            bool okay = true;
            if (queen > 0) {
                for (int i = 1; i <= queen; i++) {
                    if (solution[queen-i][col] == 'Q') {
                        okay = false;
                        break;
                    }
                    if ((col - i >= 0) && (solution[queen-i][col-i] == 'Q')) {
                        okay = false;
                        break;
                    }
                    if ((col + i < n) && (solution[queen-i][col + i] == 'Q')) {
                        okay = false;
                        break;
                    }
                }
            }
            if (okay) {
                vector<string> board = solution;
                board[queen][col] = 'Q';
                if (queen < n - 1) {
                    solve(n, queen + 1, board, results);
                } else {
                    results.push_back(board);
                }
            }
        }
    }
};
