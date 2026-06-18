/*
Problem: Evaluate Reverse Polish Notation

Given an array of strings representing an arithmetic expression in Reverse Polish Notation, evaluate the expression and return the result.

Approach: Use a stack to store operands and perform operations whenever an operator is encountered.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {
            if (token != "+" && token != "-" && token != "*" && token != "/") {
                st.push(stoi(token));
            } else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                if (token == "+") st.push(b + a);
                else if (token == "-") st.push(b - a);
                else if (token == "*") st.push(b * a);
                else st.push(b / a);
            }
        }
        return st.top();
    }
};
