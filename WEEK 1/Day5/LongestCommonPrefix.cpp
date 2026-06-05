/*
Problem: Longest Common Prefix

Given an array of strings, find the longest common prefix shared among all the strings.

Approach: Compare characters of the strings one by one and stop when a mismatch is found.

Time Complexity: O(n × m)
Space Complexity: O(1)
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (j >= strs.size() || strs[j][i] != ch) {
                    return ans;
                }
            }
            ans=ans+ch;
        }
        return ans;
    }
};