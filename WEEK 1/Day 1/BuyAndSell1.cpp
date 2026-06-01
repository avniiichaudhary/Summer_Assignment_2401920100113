/*
Problem: Best Time to Buy and Sell Stock

Given an array where each element represents the stock price on a given day, find the maximum profit that can be achieved by buying one stock and selling it later.

Approach: Keep track of the minimum price seen so far and calculate the profit for each day. Update the maximum profit whenever a higher profit is found.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
          int cost=prices[i]-mini;
          maxProfit=max(maxProfit,cost);
          mini=min(mini,prices[i]);
        }
       return maxProfit;
    }
     
};