/*
Problem: Reverse String

Given a string, reverse its characters in-place and return the reversed string.

Approach: Use two pointers, one at the beginning and one at the end, and swap characters until they meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    void reverseString(vector<char>& s) {
        int beg = 0;
        int end = s.size() - 1;
        while (beg < end) {
            swap(s[beg++], s[end--]);
        }
    }
};