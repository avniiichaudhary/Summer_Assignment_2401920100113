/*
Problem: Number of Recent Calls

Design a data structure that counts the number of requests received within the last 3000 milliseconds.

Approach: Use a queue to store timestamps and remove outdated requests that fall outside the 3000 ms window.

Time Complexity: O(1) amortized per call
Space Complexity: O(n)
*/


class RecentCounter {
      queue<int> q;
public:
   
    int ping(int t) {
        q.push(t);
        while(!q.empty() && q.front() < t - 3000) q.pop();
        return (int)q.size();
    }
};