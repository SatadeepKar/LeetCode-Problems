class Solution:
    def minSwaps(self, grid):
        n = len(grid)
        trailing = []

        for row in grid:
            cnt = 0
            for j in range(n - 1, -1, -1):
                if row[j] == 0:
                    cnt += 1
                else:
                    break
            trailing.append(cnt)

        swaps = 0

        for i in range(n):
            need = n - i - 1
            j = i

            while j < n and trailing[j] < need:
                j += 1

            if j == n:
                return -1

            while j > i:
                trailing[j], trailing[j - 1] = trailing[j - 1], trailing[j]
                swaps += 1
                j -= 1

        return swaps