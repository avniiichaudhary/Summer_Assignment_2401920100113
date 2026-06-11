/*
Problem: Decode String

Given an encoded string, decode it according to the given pattern where k[encoded_string] represents the encoded string repeated k times.

Approach: Use stacks to store numbers and intermediate strings while processing nested brackets.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;

        int num = 0;
        string curr = "";

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                countStack.push(num);
                stringStack.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int times = countStack.top();
                countStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                while (times--) {
                    prev += curr;
                }

                curr = prev;
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};