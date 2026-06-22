/*
Problem: Invert Binary Tree

Given the root of a binary tree, invert the tree by swapping the left and right children of every node.

Approach: Use recursion to traverse the tree and swap the left and right subtrees at each node.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;

        
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
