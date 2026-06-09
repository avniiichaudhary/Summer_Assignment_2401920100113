/*
Problem: Find All Anagrams in a String

Given two strings, find all starting indices of the substrings in the first string that are anagrams of the second string.

Approach: Use two hash maps to store character frequencies and compare them while sliding a window of fixed size across the string.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        unordered_map<char, int> m1, m2;

        for (char ch : p)
            m1[ch]++;

        int k = p.size();

        
        for (int i = 0; i < k; i++)
            m2[s[i]]++;

        if (m1 == m2)
            ans.push_back(0);

        for (int i = k; i < s.size(); i++) {

            m2[s[i]]++;        

            m2[s[i - k]]--;      
            if (m2[s[i - k]] == 0)
                m2.erase(s[i - k]);

            if (m1 == m2)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};