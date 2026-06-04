#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;

        // Initialize boundaries
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // 1. Move from Left to Right along the top row
            for (int j = left; j <= right; ++j) {
                result.push_back(matrix[top][j]);
            }
            top++; // Shrink top boundary

            // 2. Move from Top to Bottom along the right column
            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--; // Shrink right boundary

            // 3. Move from Right to Left along the bottom row (if rows remain)
            if (top <= bottom) {
                for (int j = right; j >= left; --j) {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--; // Shrink bottom boundary
            }

            // 4. Move from Bottom to Top along the left column (if columns remain)
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++; // Shrink left boundary
            }
        }

        return result;
    }
};
