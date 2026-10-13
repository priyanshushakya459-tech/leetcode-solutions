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
bool path(TreeNode*root,vector<TreeNode*>&ans1
,TreeNode* p){
    if(!root)return false;
    ans1.push_back(root);
    if(root->val==p->val){
     return true;
    }
    if(path(root->left,ans1,p)||path(root->right,ans1,p)){
        return true;
    }
    ans1.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>ans1;
        vector<TreeNode*>ans2;
        path(root,ans1,p);
        path(root,ans2,q);
        int n1=ans1.size();
        int n2=ans2.size();
        int i=0;
        TreeNode*ans=NULL;
        while(i<min(n1,n2)){
if(ans1[i]==ans2[i])ans=ans1[i];
else break;
i++;
        }
        return ans;
    }
};