class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {};
        bool col[9][10] = {};
        bool box[9][10] = {};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                int digit = board[i][j] - '0';
                int boxindex = (i / 3) * 3 + (j / 3);
                if (row[i][digit] || col[j][digit] || box[boxindex][digit]) {
                    return false;
                }
                row[i][digit] = true;
                col[j][digit] = true;
                box[boxindex][digit] = true;
            }
        }
        return true;
    }
};
