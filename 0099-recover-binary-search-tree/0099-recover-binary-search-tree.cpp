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
void inorder(TreeNode* root,TreeNode*prev,TreeNode*&f,TreeNode*&s){
    if(!root){
        return ;
    }
    while(root){
        if(!root->left){
            if(prev && prev->val > root->val){
                if(f==NULL)f=prev;
                 s=root;
            }
            prev=root;
            root=root->right;

        }
        else{
            TreeNode*curr=root->left;
            while(curr->right&&curr->right!=root){
                curr=curr->right;}
if(curr->right==NULL){
    curr->right=root;
    root=root->left;
}
else{
    curr->right=NULL;
  if(prev && prev->val > root->val){
    if(f==NULL)f=prev;
     s=root;
  }
  prev=root;
    root=root->right;
}
            
        }
    }
}
    void recoverTree(TreeNode* root) {
        TreeNode*prev=NULL;
        TreeNode*f=NULL;
        TreeNode*s=NULL;
        inorder(root,prev,f,s);
        if(f&&s)
        swap(f->val,s->val);
        return;
    }
};