from collections import defaultdict


class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        groups = defaultdict(list)

        for s in strs:
            sorted_s = ''.join(sorted(s))
            groups[sorted_s].append(s)

        return list(groups.values())


solve = Solution()
assert solve.groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]) \
       == [['eat', 'tea', 'ate'], ['tan', 'nat'], ['bat']], "FAIL"
assert solve.groupAnagrams([""]) == [[""]], "FAIL"
assert solve.groupAnagrams(["a"]) == [["a"]], "FAIL"
