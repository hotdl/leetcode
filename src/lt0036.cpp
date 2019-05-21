//
// Created by hotdl on 19-5-21.
//

#include <vector>

using namespace std;

namespace lt0036 {
    class Solution {
    private:
        bool is_valid_row(vector<vector<char>> &board, int row) {
            vector<bool> check(9, false);
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') continue;
                if (check[board[row][col] - '1']) return false;
                check[board[row][col] - '1'] = true;
            }
            return true;
        }

        bool is_valid_col(vector<vector<char>> &board, int col) {
            vector<bool> check(9, false);
            for (int row = 0; row < 9; row++) {
                if (board[row][col] == '.') continue;
                if (check[board[row][col] - '1']) return false;
                check[board[row][col] - '1'] = true;
            }
            return true;
        }

        bool is_valid_block(vector<vector<char>> &board, int index) {
            int left = index % 3 * 3;
            int top = index / 3 * 3;
            vector<bool> check(9, false);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (board[top + i][left + j] == '.') continue;
                    if (check[board[top + i][left + j] - '1']) return false;
                    check[board[top + i][left + j] - '1'] = true;
                }
            }
            return true;
        }

    public:
        bool isValidSudoku(vector<vector<char>> &board) {
            for (int i = 0; i < 9; i++) {
                if (!is_valid_row(board, i)) return false;
                if (!is_valid_col(board, i)) return false;
                if (!is_valid_block(board, i)) return false;
            }
            return true;
        }
    };
}