/*
Problem: Valid Anagram

Given two strings, determine whether one string is an anagram of the other.

Approach: Count the frequency of each character in both strings and compare the frequencies.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;

        if (s.size() != t.size()) {
            return false;
        }
        for (char ch : s) {
            mpp[ch]++;
        }
        for (char ch : t) {
            mpp[ch]--;
            if (mpp[ch] < 0) {
                return false;
            }
        }

        return true;
    }
};