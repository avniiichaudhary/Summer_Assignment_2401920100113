/*
Problem: Maximum Depth of Binary Tree

Given the root of a binary tree, find its maximum depth, which is the number of nodes along the longest path from the root to a leaf.

Approach: Use recursion to compute the depth of the left and right subtrees and return the greater depth plus one.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL)return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1 + max(lh, rh);
    }
};