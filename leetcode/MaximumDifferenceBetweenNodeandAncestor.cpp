/* Definition for a binary tree node.
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
    int ans=0;
    int maxAncestorDiff(TreeNode* root) {
        findDiff(root,root->val,root->val);
        return ans;
    }
    
    void findDiff(TreeNode* node, int mx, int mn){ // |10-1| < |1-11| 
        if(!node) return ;
        
        mx=max(mx,node->val);
        mn=min(mn,node->val);
        ans=max(ans,mx-mn);
        
        findDiff(node->left,mx,mn);
        findDiff(node->right,mx,mn);
        
    }
};
