class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row check
        for (int i = 0; i < 9; i++) {
            unordered_set<char> hashSet;
            for (int j = 0; j < 9; j++) {
                if (hashSet.find(board[i][j]) != hashSet.end()) {
                    return false;
                } else {
                    if (board[i][j] != '.') {
                        hashSet.insert(board[i][j]);
                    }
                }
            }
        }

        // column check
        for (int i = 0; i < 9; i++) {
            unordered_set<char> hashSet;
            for (int j = 0; j < 9; j++) {
                if (hashSet.find(board[j][i]) != hashSet.end()) {
                    return false;
                } else {
                    if (board[j][i] != '.') {
                        hashSet.insert(board[j][i]);
                    }
                }
            }
        }

        // square check
        for (int startingRow = 0; startingRow < 9; startingRow += 3) {
            for (int startingCol = 0; startingCol < 9; startingCol += 3) {
                unordered_set<char> hashSet;
                for (int i = startingRow; i < startingRow + 3; i++) {
                    for (int j = startingCol; j < startingCol + 3; j++) {
                        if (hashSet.find(board[i][j]) != hashSet.end()) {
                            return false;
                        } else {
                            if (board[i][j] != '.') {
                                hashSet.insert(board[i][j]);
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
