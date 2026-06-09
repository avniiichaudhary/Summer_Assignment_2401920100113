/*
Problem: Longest Substring Without Repeating Characters

Given a string, find the length of the longest substring without repeating characters.

Approach: Use the Sliding Window technique with a hash map or set to track characters and maintain a substring with unique characters.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            mpp[s[right]]++;

            while (mpp[s[right]] > 1) {
                mpp[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};