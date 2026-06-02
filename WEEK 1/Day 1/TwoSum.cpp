/*
Problem: Two Sum

Given an array of integers and a target value, find the indices of two numbers whose sum equals the target.

Approach: Use a hash map to store elements and their indices for efficient lookup.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num;
            if (mpp.find(moreNeeded) !=mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};