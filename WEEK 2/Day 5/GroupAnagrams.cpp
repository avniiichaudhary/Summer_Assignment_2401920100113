/*
Problem: Group Anagrams

Given an array of strings, group together the strings that are anagrams of each other.

Approach: Use a hash map with the sorted form of each string as the key and store all corresponding anagrams together.

Time Complexity: O(n × k log k)
Space Complexity: O(n × k)
*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();

        vector<vector<string>> result;

        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < n; i++) {

            string temp = strs[i];

            sort(temp.begin(), temp.end());

            mp[temp].push_back(strs[i]);
        }

        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};