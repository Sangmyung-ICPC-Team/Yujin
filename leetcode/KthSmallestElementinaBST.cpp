/*
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
    int kthSmallest(TreeNode* root, int k) {
        return kth_smallest(root, k);
    }
    
    int kth_smallest(TreeNode*root, int &k){
        if(!root)
            return INT_MAX;
        int left=kth_smallest(root->left, k);
        
        if(left!=INT_MAX)
            return left;
        if(--k==0)
            return root->val;
        
        return kth_smallest(root->right, k);
    }
};
