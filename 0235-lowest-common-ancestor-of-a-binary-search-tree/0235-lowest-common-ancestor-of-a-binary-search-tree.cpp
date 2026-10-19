/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
void helper(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode*&ans){
        if(!root)return ;
        if(p->val==root->val){ans=p;
        return ;}
        if(q->val==root->val){ans=q;
        return ;}
        if(root->val>p->val&&root->val<q->val){
            ans=root;
      return ;
        }
       else if(root->val<p->val&&root->val>q->val){
      ans=root;
      return ;
       }
       else if(root->val<p->val&&root->val<q->val){
        helper(root->right,  p, q,ans);}
        else {
        helper(root->left,  p, q,ans);}
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return NULL;
        TreeNode*ans=NULL;
        helper(root,p,q,ans);
        return ans;
    }
};