/*
Problem: Ransom Note

Given two strings, ransomNote and magazine, determine if the ransom note can be constructed using the letters from the magazine. Each letter can be used only once.

Approach: Count the frequency of characters in the magazine and verify that the ransom note can be formed using those characters.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(char ch:magazine)
        {
            mpp[ch]++;
        }

        for(char c:ransomNote)
        {
            mpp[c]--;
            if(mpp[c]<0)
            {
                return false;
            }
        }
        return true;
    }
};