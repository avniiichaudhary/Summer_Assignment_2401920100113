/*
Problem: Next Greater Element I

Given two arrays, find the next greater element for each element of the first array based on its position in the second array.

Approach: Use a monotonic stack to find the next greater element for each number and store the results in a hash map for quick lookup.

Time Complexity: O(n + m)
Space Complexity: O(n)
*/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;

        for(int num : nums2)
        {
            while(!st.empty() && num > st.top())
            {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while(!st.empty())
        {
            mp[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for(int num : nums1)
        {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};