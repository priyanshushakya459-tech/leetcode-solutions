class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      unordered_map<int,int>m;
       vector<int>ans;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(m[nums[i]]==0)m[nums[i]]=1;
        else{
            ans.push_back(nums[i]);
        }
      }
      return ans;
    }
};