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
    bool isSameTree(TreeNode* root1, TreeNode* root2){
        if(root1 ==nullptr and root2== nullptr) return true;
        if(root1 ==nullptr or root2== nullptr) return false;

        return root1->val==root2->val and isSameTree(root1->left,root2->left) and isSameTree(root1->right,root2->right);

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root ==nullptr and subRoot== nullptr) return true;
        if(root ==nullptr or subRoot== nullptr) return false;
        
        return isSameTree(root,subRoot) || isSubtree(root->right,subRoot) || isSubtree(root->left,subRoot);
    
    }
};
