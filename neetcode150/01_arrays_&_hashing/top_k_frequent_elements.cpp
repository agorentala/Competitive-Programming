#include "vector"
#include "queue"
#include "unordered_map"

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        if (k == nums.size()) {
            return nums;
        }

        unordered_map<int, int> freq;
        for (int &num: nums) {
            ++freq[num];
        }

        auto comp = [&freq](int num1, int num2) { return freq[num1] > freq[num2]; };
        priority_queue<int, vector<int>, decltype(comp)> heap(comp);

        for (auto &p: freq) {
            heap.push(p.first);
            if (heap.size() > k) {
                heap.pop();
            }
        }

        vector<int> ret(k);
        for (int i = k - 1; i >= 0; --i) {
            ret[i] = heap.top();
            heap.pop();
        }
        return ret;
    }
};