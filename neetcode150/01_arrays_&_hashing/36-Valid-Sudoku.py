from collections import defaultdict


class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        rows = defaultdict(set)
        cols = defaultdict(set)
        boxes = defaultdict(set)

        for i in range(9):
            for j in range(9):
                cur = board[i][j]
                if cur == ".":
                    continue
                if cur in rows[i] or cur in cols[j] or cur in boxes[(i // 3, j // 3)]:
                    return False
                rows[i].add(cur)
                cols[j].add(cur)
                boxes[(i // 3, j // 3)].add(cur)
        return True
