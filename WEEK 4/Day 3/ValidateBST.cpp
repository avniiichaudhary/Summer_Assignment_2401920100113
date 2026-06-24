/*
Problem: Validate Binary Search Tree

Given the root of a binary tree, determine whether it is a valid Binary Search Tree.

Approach: Use recursion with lower and upper bounds to ensure that every node satisfies the BST property.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }

private:
    bool valid(TreeNode* node, long minimum, long maximum) {
        if (node == NULL) return true;

        if (node->val <= minimum || node->val >= maximum)
            return false;

        return valid(node->left, minimum, node->val) &&
               valid(node->right, node->val, maximum);
    }
};