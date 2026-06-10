/*
Problem: Is Subsequence

Given two strings, determine whether one string is a subsequence of the other.

Approach: Store the indices of each character in a hash map and use binary search to find the next valid position for every character, making it efficient for multiple queries.

Time Complexity: O(n + m log n)
Space Complexity: O(n)
*/


class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map < char, vector < int >> mp;
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]].push_back(i);
        }

        int previ = -1;

        for (char ch : s) {
            if (mp.find(ch) == mp.end()) {
                return false;
            }

            vector<int>& indices = mp[ch];

            auto it = upper_bound(indices.begin(), indices.end(), previ);

            if (it == indices.end()) {
                return false;
            }

            previ = *it;
        }
        return true;
    }
};