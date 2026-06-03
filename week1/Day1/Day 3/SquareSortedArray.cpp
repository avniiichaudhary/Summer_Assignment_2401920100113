/*
Problem: Squares of a Sorted Array

Given a sorted integer array, return an array of the squares of each number sorted in non-decreasing order.

Approach: Use two pointers from both ends of the array and place the larger square at the end of the result array.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int i = n - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                ans[i] = leftSquare;
                left++;
            } else {
                ans[i] = rightSquare;
                right--;
            }

            i--;
        }

        return ans;
    }
};