/*Place the root into the queue if it exists.

Continue while the queue is not empty.

Record the current queue size as the number of nodes in the active level.

Process exactly that many nodes and store their values together.

Add the children of those nodes to the queue for the next level.

Add the completed level to the final result.*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left != nullptr)
                    q.push(node->left);

                if (node->right != nullptr)
                    q.push(node->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};