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
    void traverse(TreeNode* root,int currentMax, int &ans){
        if(root==nullptr) return;

        if(root->val>= currentMax){
            ans++;
            currentMax=root->val;
        }

        traverse(root->left, currentMax, ans);
        traverse(root->right, currentMax, ans);

    }
public:
    int goodNodes(TreeNode* root) {
        int ans=0;
        traverse(root,root->val,ans);
        return ans;
        
    }
};
