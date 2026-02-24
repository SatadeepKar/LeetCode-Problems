class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* root, int val) {
        if (!root) return;

        val = (val << 1) | root->val;

        // if leaf node
        if (!root->left && !root->right) {
            ans += val;
            return;
        }

        dfs(root->left, val);
        dfs(root->right, val);
    }

    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};