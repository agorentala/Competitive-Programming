#include <string>
#include <iostream>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
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
    std::cout << solve.isAnagram("gaming", "jaming");
    std::cout << solve.isAnagram("gaming", "maging");
}