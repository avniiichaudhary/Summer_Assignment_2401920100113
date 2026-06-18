/*
Problem: Implement Queue using Stacks

Implement a first-in-first-out (FIFO) queue using only stack operations.

Approach: Use two stacks, one for insertion and one for deletion, to maintain the queue order efficiently.

Time Complexity: O(1) amortized for each operation
Space Complexity: O(n)
*/


class MyQueue {
public:
    stack<int>in;
    stack<int>out;   
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(out.empty())
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        int top=out.top();
        out.pop();
        return top;
    }
    
    int peek() {
        if(out.empty())   
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        return out.top();
    }
    
    bool empty() {
        return (in.empty() && out.empty());
    }
};