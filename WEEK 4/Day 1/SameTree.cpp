/*
Problem: Same Tree

Given the roots of two binary trees, determine whether they are identical in structure and node values.

Approach: Use recursion to compare corresponding nodes of both trees and verify that their values and subtrees match.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL)
            return false;
        if (p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};