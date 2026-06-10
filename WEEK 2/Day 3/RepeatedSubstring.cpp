/*
Problem: Repeated Substring Pattern

Given a string, determine whether it can be formed by repeating one of its substrings multiple times.

Approach: Try every possible substring length that divides the string length, generate the repeated pattern, and compare it with the original string.

Time Complexity: O(n²)
Space Complexity: O(n)
*/


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int l = n / 2; l >= 1; l--) {

            if (n % l == 0) {

                int times = n / l;

                string pattern = s.substr(0, l);
                string newStr = "";

                while (times--) {
                    newStr += pattern;
                }

                if (newStr == s)
                    return true;
            }
        }

        return false;
    }
};