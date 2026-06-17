/*
Problem: Valid Parentheses

Given a string containing brackets '()', '{}', and '[]', determine whether the brackets are properly matched and nested.

Approach: Use a stack to store opening brackets and match them with corresponding closing brackets while traversing the string.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};