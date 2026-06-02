/*
Problem: Remove Duplicates from Sorted Array

Given a sorted array, remove duplicate elements in-place such that each unique element appears only once. Return the number of unique elements.

Approach: Use two pointers. One pointer tracks the position of the last unique element, while the other traverses the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
