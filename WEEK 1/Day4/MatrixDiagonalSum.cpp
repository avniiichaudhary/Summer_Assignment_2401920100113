class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int totalSum = 0;
        
        for (int i = 0; i < n; ++i) {
            totalSum += mat[i][i]; // Primary diagonal
            
            int j = n - 1 - i;
            if (i != j) {
                totalSum += mat[i][j]; // Secondary diagonal
            }
        }
        
        return totalSum;
    }
};
