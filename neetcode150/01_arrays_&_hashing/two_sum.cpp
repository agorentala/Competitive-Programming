#include "vector"
#include "unordered_map"
#include "iostream"

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::unordered_map<int, int> seen;
        int diff;
        for (int i = 0; i < nums.size(); ++i) {
            diff = target - nums[i];

            if (seen.find(diff) != seen.end()) {
                return {seen[diff], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solve;
    std::vector<int> test, check;

    std::cout << ((solve.twoSum(test = {2, 7, 11, 15}, 9) == (check = {0, 1})) ? "PASS" : "FAIL") << std::endl;
    std::cout << ((solve.twoSum(test = {3, 2, 4}, 6) == (check = {1, 2})) ? "PASS" : "FAIL") << std::endl;
    std::cout << ((solve.twoSum(test = {3, 3}, 6) == (check = {0, 1})) ? "PASS" : "FAIL") << std::endl;
}