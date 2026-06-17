/*
Problem: Min Stack

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Approach: Use an additional stack to keep track of the minimum element at each stage, enabling O(1) retrieval of the minimum value.

Time Complexity: O(1) for all operations
Space Complexity: O(n)
*/


class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};
