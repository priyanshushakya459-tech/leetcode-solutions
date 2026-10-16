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
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        TreeNode*child=NULL;
        while(root){
            child=root->left;
            while(child&&child->right){
                child=child->right;
            }
            if(child){
            child->right=root->right;
            root->right=NULL;
            root->right=root->left;
            root->left=NULL;
            }
           
            root=root->right;

            
        }
      
        
    }
};