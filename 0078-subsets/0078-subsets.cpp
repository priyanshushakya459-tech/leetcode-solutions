class Solution {
public:
void powerset(vector<int>& nums,vector<vector<int>>&ans,vector<int>&temp,int index){
    if(index==nums.size()){
        ans.push_back(temp);
        return ;
    }
    powerset(nums,ans,temp,index+1);
    temp.push_back(nums[index]);
    powerset(nums,ans,temp,index+1);
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>temp;
       powerset(nums,ans,temp,0); 
       return ans;
    }
};