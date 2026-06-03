/*
Problem: Container With Most Water

Given an array representing the height of vertical lines, find two lines that together form a container capable of holding the maximum amount of water.

Approach: Use two pointers at both ends and move the pointer with the smaller height to maximize the area.

Time Complexity: O(n)
Space Complexity: O(1)
*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;

        while (left < right) {
            int len = min(height[left], height[right]);
            area = max(area, (right - left) * len);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return area;
    }
};