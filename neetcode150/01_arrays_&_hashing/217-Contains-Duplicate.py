# LeetCode: 217. Contains Duplicate
# Given int array, return true if any value appears at least twice
# Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false
# If seen num previously then has dupe, else insert into hash set
# Time: O(n)
# Space: O(n)

class Solution:
    def contains_duplicate(self, nums: list[int]) -> bool:
        hashset = set()

        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False


solve = Solution()
assert solve.contains_duplicate([1, 2, 3, 1]), "Should be True"
assert not solve.contains_duplicate([1, 2, 3, 4]), "Should be False"
assert solve.contains_duplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2]), "Should be True"
