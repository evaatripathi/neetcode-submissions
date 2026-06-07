class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
        for (int r = 0; r < 9; r++) {
            unordered_set<char> seen;
            for (int c = 0; c < 9; c++) {
                if (board[r][c] != '.') {
                    if (seen.count(board[r][c])) return false;
                    seen.insert(board[r][c]);
                }
            }
        }
       
        for (int c = 0; c < 9; c++) {
            unordered_set<char> seen;
            for (int r = 0; r < 9; r++) {
                if (board[r][c] != '.') {
                    if (seen.count(board[r][c])) return false;
                    seen.insert(board[r][c]);
                }
            }
        }
        
       
        for (int box = 0; box < 9; box++) {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++) {
             
                int r = (box / 3) * 3 + (i / 3);
                int c = (box % 3) * 3 + (i % 3);
                
                if (board[r][c] != '.') {
                    if (seen.count(board[r][c])) return false;
                    seen.insert(board[r][c]);
                }
            }
        }
        
        return true;
    }
};
