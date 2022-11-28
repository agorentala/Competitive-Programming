import heapq
from collections import Counter


class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = Counter(nums)

        ret = []
        for num, count in freq.items():
            heapq.heappush(ret, (count, num))
            if len(ret) > k:
                heapq.heappop(ret)
        return [x[1] for x in ret]

        # return heapq.nlargest(k, freq, freq.get)


solve = Solution()
assert sorted(solve.topKFrequent([1, 1, 1, 2, 2, 3], 2)) == sorted([1, 2]), "Should be [1, 2] (any order)"
assert solve.topKFrequent([1], 1) == [1], "Should be [1]"
