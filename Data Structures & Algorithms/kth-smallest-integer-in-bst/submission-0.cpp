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
    void dfs(TreeNode* root, vector<int> &allNodes){
        if(root==nullptr) return;

        dfs(root->left,allNodes);
        allNodes.push_back(root->val);
        dfs(root->right, allNodes);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> allNodes;
        dfs(root, allNodes);

        return allNodes[k-1];

        
    }
};
