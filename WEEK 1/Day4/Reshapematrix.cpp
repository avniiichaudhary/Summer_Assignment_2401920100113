#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // If the total elements do not match, the reshape is illegal.
        if (m * n != r * c) {
            return mat;
        }
        
        // Initialize the new reshaped matrix with r rows and c columns.
        std::vector<std::vector<int>> reshaped(r, std::vector<int>(c));
        
        // Map elements using a single dimension index loop
        for (int i = 0; i < m * n; ++i) {
            // Fetch from mat using original column size 'n'
            // Place into reshaped matrix using new column size 'c'
            reshaped[i / c][i % c] = mat[i / n][i % n];
        }
        
        return reshaped;
    }
};
