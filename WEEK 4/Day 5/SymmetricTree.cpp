/*
Problem: Symmetric Tree

Given the root of a binary tree, determine whether it is symmetric around its center.

Approach: Use recursion to compare the left and right subtrees in a mirror-like manner.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;
        if (!t1 || !t2) return false;
        if (t1->val != t2->val) return false;

        return isMirror(t1->left, t2->right) &&
               isMirror(t1->right, t2->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }
};