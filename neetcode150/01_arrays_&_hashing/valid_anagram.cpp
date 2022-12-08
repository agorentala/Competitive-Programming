#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t) {
            return true;
        }

        if (s.length() != t.length()) {
            return false;
        }

        int counts[26]{};

        for (char const &c: s) {
            ++counts[c - 'a'];
        }

        for (char const &c: t) {
            if (--counts[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solve;
    cout << solve.isAnagram("gaming", "jaming");
    cout << solve.isAnagram("gaming", "maging");
}