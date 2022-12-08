#include "vector"
#include "unordered_map"
#include "unordered_set"

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        char cur;
        int ind;
        int box;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cur = board[i][j];
                if (cur == '.') {
                    continue;
                }

                ind = cur - '1';
                box = (i / 3) * 3 + (j / 3);
                if (rows[i][ind] || cols[j][ind] || boxes[box][ind]) {
                    return false;
                }
                rows[i][ind] = true;
                cols[j][ind] = true;
                boxes[box][ind] = true;
            }
        }
        return true;
    }
};