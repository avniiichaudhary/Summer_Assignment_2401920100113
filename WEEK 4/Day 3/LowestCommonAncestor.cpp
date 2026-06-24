/*
Problem: Lowest Common Ancestor of a Binary Tree

Given the root of a binary tree and two nodes, find their lowest common ancestor.

Approach: Use recursion to search both subtrees. If both nodes are found in different subtrees, the current node is their lowest common ancestor.

Time Complexity: O(n)
Space Complexity: O(h)
*/


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        if (root == NULL || root == p || root == q) {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

      
        if (left == NULL) {
            return right;
        }
        else if (right == NULL) {
            return left;
        }
        else { 
            return root;
        }
    }
};