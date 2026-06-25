/*
Problem: Path Sum

Given the root of a binary tree and a target sum, determine whether there exists a root-to-leaf path whose node values add up to the target sum.

Approach: Use recursion to subtract each node's value from the target sum and check whether a leaf node reaches the remaining sum of zero.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) {
            return false;
        }
        
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        bool left_sum = hasPathSum(root->left, targetSum - root->val);
        bool right_sum = hasPathSum(root->right, targetSum - root->val);
        
        return left_sum || right_sum;
    }
};