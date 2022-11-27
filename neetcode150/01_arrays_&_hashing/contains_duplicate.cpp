/*  LeetCode: 217. Contains Duplicate
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false
    If seen num previously then has dupe, else insert into hash set
    Time: O(n)
    Space: O(n)
*/
#include <vector>
#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool containsDuplicate(std::vector<int> &nums) {
        std::unordered_set<int> seen;
        for (int &i: nums) {
            if (seen.find(i) != seen.end()) {
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    Solution solve = Solution();
    std::vector<int> v = {1, 2, 1};
    std::cout << (solve.containsDuplicate(v) ? "YES" : "NO") << std::endl;
}