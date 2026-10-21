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
void dfs(TreeNode*root,TreeNode*&ans,TreeNode*&temp){
if(!root)return;
dfs(root->left,ans,temp);
if(ans==NULL&&temp==NULL){
    ans=temp=root;
    

}
else{
    temp->right=root;
    root->left=NULL;
    temp=temp->right;
}
dfs(root->right,ans,temp);
}
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*ans=NULL;
        TreeNode*temp=NULL;
        dfs(root,ans,temp);
        return ans;
    }
};