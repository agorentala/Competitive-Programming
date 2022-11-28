#include "string"
#include "vector"
#include "unordered_map"

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        for (std::string &str: strs) {
            groups[getKey(str)].push_back(str);
        }

        std::vector<std::vector<std::string>> ret;
        for (auto &group: groups) {
            ret.push_back(group.second);
        }
        return ret;
    }

private:
    std::string getKey(std::string &str) {
        int counter[26]{};
        for (char &c: str) {
            counter[c - 'a']++;
        }

        std::string ret;
        for (int &count: counter) {
            ret.append(std::to_string(count + 'a'));
        }
        return ret;
    }
};