/*
Problem: Longest Palindromic Substring

Given a string, find the longest substring that is a palindrome.

Approach: Expand around each character (and between two characters) as the center and keep track of the longest palindrome found.

Time Complexity: O(n²)
Space Complexity: O(1)
*/



class Solution {
public:

    bool solve(string &s,int i,int j)
    {
        if(i>=j)
        {
            return true;

        }
        if(s[i]==s[j])
        {
            return solve(s,i+1,j-1);
        }
        return false;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=INT_MIN;
        int sp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(solve(s,i,j)==true)
                {
                    if(j-i+1>maxlen)
                    {
                        maxlen=j-i+1;
                        sp=i;
                    }
                }
            }
        }
        return s.substr(sp,maxlen);
    }
};