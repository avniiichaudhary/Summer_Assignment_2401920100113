/*
Problem: Binary Tree Level Order Traversal

Given the root of a binary tree, return the level order traversal of its nodes' values.

Approach: Use a queue to perform Breadth-First Search (BFS) and process nodes level by level.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode*node= q.front();
                q.pop();
                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};