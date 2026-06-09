/*
Problem: Permutation in String

Given two strings, determine whether one string contains a permutation of the other as a substring.

Approach: Use two hash maps to store character frequencies and compare them while sliding a window of fixed size across the string.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        unordered_map<char,int> m1, m2;

        for(char ch : s1)
            m1[ch]++;

        int k = s1.size();

        for(int i = 0; i < k; i++)
            m2[s2[i]]++;

        if(m1 == m2)
            return true;

        for(int i = k; i < s2.size(); i++) {

            m2[s2[i]]++;  

            m2[s2[i-k]]--;
            
            if(m2[s2[i-k]] == 0)
                m2.erase(s2[i-k]);

            if(m1 == m2)
                return true;
        }

        return false;
    }
};