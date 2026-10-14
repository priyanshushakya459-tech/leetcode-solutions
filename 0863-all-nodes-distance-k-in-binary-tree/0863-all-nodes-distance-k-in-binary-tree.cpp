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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(k==0)return {target->val};
        unordered_map<TreeNode*,TreeNode*>par;
        par[root]=NULL;
        vector<int>ans;
        unordered_map<TreeNode*,int>vis;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*parent=q.front();
                q.pop();
                if(parent->left){
                    q.push(parent->left);
                    par[parent->left]=parent;
                }
                if(parent->right){
                    q.push(parent->right);
                    par[parent->right]=parent;
                }
            }
        }
        q.push(target);
        vis[target]=1;
        while(!q.empty()&&k){
            k--;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                 vis[node]=1;

                if(node->left&&vis[node->left]==0){

                    q.push(node->left);
                    if(k==0)ans.push_back(node->left->val);
                }
                if(node->right&&vis[node->right]==0){

                    q.push(node->right);
                    if(k==0)ans.push_back(node->right->val);
                }
                if(par[node]&&vis[par[node]]==0){

                    q.push(par[node]);
                    if(k==0)ans.push_back(par[node]->val);
                }
            }
        }
        return ans;
    }
};