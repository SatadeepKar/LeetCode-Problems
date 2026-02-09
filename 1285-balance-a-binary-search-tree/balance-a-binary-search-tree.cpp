/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void inTraverse(TreeNode* root, vector<int>& inorder){
        if(!root) return;

        inTraverse(root->left, inorder);
        inorder.push_back(root->val);
        inTraverse(root->right,inorder);
    }
    TreeNode *constructBalancedBST(vector<int>& in,int low, int high){
        if(low>high) return NULL;

        int mid = low + (high-low)/2;
        TreeNode *curr = new TreeNode(in[mid]);

        curr->left = constructBalancedBST(in, low, mid-1);
        curr->right = constructBalancedBST(in, mid+1, high);
        return curr;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return NULL;

        vector<int> inorder;
        inTraverse(root,inorder);
        return constructBalancedBST(inorder,0,inorder.size()-1);
    }
};