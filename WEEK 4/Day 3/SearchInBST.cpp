/*
Problem: Search in a Binary Search Tree

Given the root of a Binary Search Tree and a target value, find the node containing the target and return the subtree rooted at that node.

Approach: Use the BST property to recursively or iteratively search in the left or right subtree based on the target value.

Time Complexity: O(h)
Space Complexity: O(h)
*/


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val)
            return root;

        if (val < root->val)
            return searchBST(root->left, val);

        return searchBST(root->right, val);
    }
};