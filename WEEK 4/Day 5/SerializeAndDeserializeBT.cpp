/*
Problem: Serialize and Deserialize Binary Tree

Given the root of a binary tree, convert it into a string and reconstruct the original tree from that string.

Approach: Use level-order traversal (BFS) with null markers to serialize the tree and rebuild it using a queue during deserialization.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "";

        queue<TreeNode*> q;
        q.push(root);
        string ans;

        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();

            if (!cur) {
                ans += "#,";
                continue;
            }

            ans += to_string(cur->val) + ",";
            q.push(cur->left);
            q.push(cur->right);
        }

        return ans;
    }

    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;

        stringstream ss(data);
        string s;
        getline(ss, s, ',');

        TreeNode* root = new TreeNode(stoi(s));
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();

            getline(ss, s, ',');
            if (s != "#") {
                cur->left = new TreeNode(stoi(s));
                q.push(cur->left);
            }

            getline(ss, s, ',');
            if (s != "#") {
                cur->right = new TreeNode(stoi(s));
                q.push(cur->right);
            }
        }

        return root;
    }
};