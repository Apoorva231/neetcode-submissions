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
    bool isValid(TreeNode* root, long long lowerBound, long long upperBound){
        if(root==nullptr) return true;

        if(root->val >= upperBound || root-> val <= lowerBound) return false;

        return isValid(root->left, lowerBound, root->val) and isValid(root->right, root->val, upperBound);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX) ;
        
    }
};
