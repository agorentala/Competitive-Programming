#include "string"
#include "vector"
#include "unordered_map"
#include "algorithm"

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> groups;
        string key;
        for (string &str: strs) {
            key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> ret;
        for (auto &group: groups) {
            ret.push_back(group.second);
        }
        return ret;
    }
};