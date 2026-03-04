class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        // Count 1s in each row and column
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int result = 0;
        // Check special positions
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1 &&
                    rowCount[i] == 1 &&
                    colCount[j] == 1) {
                    result++;
                }
            }
        }

        return result;
    }
};