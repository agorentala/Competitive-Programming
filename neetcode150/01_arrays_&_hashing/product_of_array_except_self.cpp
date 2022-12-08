#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> ret(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            ret[i] = prefix;
            prefix *= nums[i];
        }

        int postfix = 1;
        for (int i = n - 1; i >= 0; --i) {
            ret[i] *= postfix;
            postfix *= nums[i];
        }

        return ret;
    }
};