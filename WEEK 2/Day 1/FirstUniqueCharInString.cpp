/*
Problem: First Unique Character in a String

Given a string, find the index of the first non-repeating character. Return -1 if no unique character exists.

Approach: Count the frequency of each character, then traverse the string again to find the first character with a frequency of one.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
