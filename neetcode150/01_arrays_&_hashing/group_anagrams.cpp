#include "string"
#include "vector"
#include "unordered_map"
#include "algorithm"

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        std::string key;
        for (std::string &str: strs) {
            key = str;
            std::sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        std::vector<std::vector<std::string>> ret;
        for (auto &group: groups) {
            ret.push_back(group.second);
        }
        return ret;
    }
};