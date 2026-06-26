/*
Problem: Construct Binary Tree from Preorder and Inorder Traversal

Given the preorder and inorder traversal of a binary tree, construct and return the binary tree.

Approach: Use recursion to identify the root from preorder and split the inorder traversal into left and right subtrees for recursive construction.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    unordered_map<int, int> mp;
    int preIndex = 0;

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return build(preorder, 0, inorder.size() - 1);
    }

    TreeNode* build(vector<int>& preorder, int left, int right) {
        if (left > right)
            return NULL;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int mid = mp[rootVal];

        root->left = build(preorder, left, mid - 1);
        root->right = build(preorder, mid + 1, right);

        return root;
    }
};