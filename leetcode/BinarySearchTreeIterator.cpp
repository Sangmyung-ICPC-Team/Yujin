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
class BSTIterator {
private:
    stack<TreeNode*>num;
public:
    BSTIterator(TreeNode* root) {
        getSmallNode(root);
    }
    
    int next() {
        TreeNode* p=num.top();
        num.pop();
        
        if(p->right)
            getSmallNode(p->right);
        return p->val;
    }
    
    bool hasNext() {
        return (num.empty() ? false : true);
    }
    
    void getSmallNode(TreeNode*node){
        while(node){
            num.push(node);
            node=node->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
