#include "vector"
#include "unordered_map"
#include "unordered_set"

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> boxes;

        char cur;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cur = board[i][j];
                if (cur == '.') {
                    continue;
                }
                if (rows[i].count(cur) || cols[j].count(cur) || boxes[(3 * (i / 3)) + (j / 3)].count(cur)) {
                    return false;
                }
                rows[i].insert(cur);
                cols[j].insert(cur);
                boxes[(3 * (i / 3)) + (j / 3)].insert(cur);
            }
        }
        return true;
    }
};