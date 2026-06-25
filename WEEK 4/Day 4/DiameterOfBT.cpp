/*
Problem: Diameter of Binary Tree

Given the root of a binary tree, find the length of the longest path between any two nodes.

Approach: Use recursion to calculate the height of each subtree while updating the maximum diameter at every node.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode* node, int& diameter) {
        if (!node) return 0;

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};