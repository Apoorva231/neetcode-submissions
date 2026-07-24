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
        int maxRight = maxDepth(root->right);

        return 1 + max(maxLeft, maxRight);
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int leftHeight= maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        bool isRootBalanced= abs(leftHeight-rightHeight)<2;

        bool isLeftBalanced=isBalanced(root->left);
        bool isRightBalanced=isBalanced(root->right);

        return isRootBalanced and isLeftBalanced and isRightBalanced;
    }
};
