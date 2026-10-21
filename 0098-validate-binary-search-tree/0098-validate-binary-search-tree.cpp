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
bool ivb(TreeNode* root,long long &prev){
if(!root)return true;
int l=ivb(root->left,prev);
if(root->val<=prev)return false;
prev=root->val;
int r=ivb(root->right,prev);
return l&&r;
}
    bool isValidBST(TreeNode* root) {
        if(!root->left&&!root->right)return true;
        long long prev=LLONG_MIN;
      return   ivb(root,prev);


    }
};