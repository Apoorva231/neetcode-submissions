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
   public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int maxLeft = maxDepth(root->left);
        if(maxLeft==-1) return -1;
        int maxRight = maxDepth(root->right);
        if(maxRight==-1) return -1;

        if(abs(maxLeft-maxRight)>1){
            return -1;
        }
        
        return 1 + max(maxLeft, maxRight);
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        return maxDepth(root)!=-1;
    }
};
