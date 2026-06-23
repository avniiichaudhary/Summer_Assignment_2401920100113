/*
Problem: Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Approach: Use recursion or a stack to traverse the left subtree, visit the root, and then traverse the right subtree.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root) {
        if(root==NULL)
        return;

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};