/*
Problem: Binary Tree Maximum Path Sum

Given the root of a binary tree, find the maximum path sum, where a path can start and end at any node.

Approach: Use recursion to compute the maximum gain from each subtree while updating the maximum path sum at every node.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    int maxPathDown(TreeNode* node, int &maxi) {
        if (node == NULL) return 0;

        int left = max(0, maxPathDown(node->left, maxi));
        int right = max(0, maxPathDown(node->right, maxi));

        maxi = max(maxi, left + right + node->val);

        return max(left, right) + node->val;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
};