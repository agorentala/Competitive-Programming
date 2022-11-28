class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}
        for i, n in enumerate(nums):
            diff = target - n
            if diff in seen:
                return [seen[diff], i]
            seen[n] = i


solve = Solution()
assert solve.twoSum([2, 7, 11, 15], 9) == [0, 1], "Should be [0, 1]"
assert solve.twoSum([3, 2, 4], 6) == [1, 2], "Should be [1, 2]"
assert solve.twoSum([3, 3], 6) == [0, 1], "Should be [0, 1]"
