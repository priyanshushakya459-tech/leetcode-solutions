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
    int widthOfBinaryTree(TreeNode* root) {
      
       queue<pair<TreeNode*,long long>>q;
       q.push({root,1});
       long long rm=INT_MIN;
       long long lm=INT_MAX;
       long long ans=INT_MIN;
       while(!q.empty()){
       
       int n=q.size();
       int base=q.front().second;
       for(int i=0;i<n;i++){
       TreeNode*curr=q.front().first;
       long long ind=q.front().second;
       
       q.pop();
       if(lm==INT_MAX)lm=ind;
       rm=ind;
       if(curr->left) q.push({curr->left,(ind-base)*2});
       if(curr->right) q.push({curr->right,(ind-base)*2+1});
     
       }
       ans=max(ans,rm-lm+1);
       lm=INT_MAX;
       rm=INT_MIN;;
       } 
       return int(ans);
    }
};