/*
Problem: Valid Palindrome

Given a string, determine whether it is a palindrome after removing non-alphanumeric characters and ignoring letter case.

Approach: Use two pointers from both ends, skip non-alphanumeric characters, and compare the remaining characters.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(char ch : s) {
            if(isalnum(ch)) {
                temp =temp+ tolower(ch);
            }
        }

        string rev = temp;
        reverse(rev.begin(), rev.end());

        return temp == rev;
    }
};