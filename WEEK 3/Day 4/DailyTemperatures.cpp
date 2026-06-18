/*
Problem: Daily Temperatures

Given an array of daily temperatures, return an array where each element represents the number of days to wait until a warmer temperature. If no warmer temperature exists, return 0.

Approach: Use a monotonic decreasing stack to keep track of indices and determine the next warmer day for each temperature.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); 
        
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;
            }
            st.push(i);
        }
        return ans;
    }
};