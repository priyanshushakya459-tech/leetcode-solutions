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
void helper(TreeNode* root,int &temp,int &sum){
    if(!root){
        return;

    }
    temp=(temp*10)+root->val;
    if(!root->left&&!root->right){
        sum+=temp;
    }
    helper(root->left,temp,sum);
    helper(root->right,temp,sum);
    temp/=10;
}
    int sumNumbers(TreeNode* root) {
        int temp=0;
        int sum=0;
        helper(root,temp,sum);
        return sum;
    }
};