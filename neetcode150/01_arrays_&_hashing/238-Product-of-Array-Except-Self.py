class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        ret = [1] * len(nums)

        prefix = 1
        for i, n in enumerate(nums):
            ret[i] = prefix
            prefix *= n

        postfix = 1
        for i in range(len(nums) - 1, -1, -1):
            ret[i] *= postfix
            postfix *= nums[i]

        return ret
