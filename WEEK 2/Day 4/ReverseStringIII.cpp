/*
Problem: Reverse String III

Given a string, reverse the characters of each word while preserving the word order and spaces.

Approach: Traverse the string, identify each word, and reverse its characters individually.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    string reverseWords(string s) {

        int start = 0;
        int n = s.length();

        for (int i = 0; i <= n; i++) {

            if (i == n || s[i] == ' ') {

                int left = start;
                int right = i - 1;

                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                start = i + 1;
            }
        }

        return s;
    }
};