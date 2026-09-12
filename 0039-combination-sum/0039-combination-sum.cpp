class Solution {
public:
void cs(vector<int>& candidates,vector<vector<int>> &ans,vector<int>&temp,int target,int index){
    if(target==0){
        ans.push_back(temp);
        return ;
    }
    if(candidates.size()==index||target<0){
        return ;
    }
    temp.push_back(candidates[index]);
    cs(candidates,ans,temp,target-candidates[index],index);
    temp.pop_back();
    // temp.push_back(cadidates[index]);
    cs(candidates,ans,temp,target,index+1);
   
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        cs(candidates,ans,temp,target,0);
        return ans;
    }
};