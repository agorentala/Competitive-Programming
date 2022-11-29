#include "vector"
#include "unordered_map"

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        int n = nums.size();

        unordered_map<int, int> freq;
        for (int &num: nums) {
            ++freq[num];
        }

        vector<vector<int>> buckets(n + 1);
        for (auto &it: freq) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> ret;
        for (; n >= 0; n--) {
            if (ret.size() >= k) {
                return ret;
            }
            if (!buckets[n].empty()) {
                ret.insert(ret.end(), buckets[n].begin(), buckets[n].end());
            }
        }
        return ret;
    }
};