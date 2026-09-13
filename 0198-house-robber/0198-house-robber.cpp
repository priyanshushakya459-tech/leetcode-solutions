class Solution {
public:
    int rob(vector<int>& nums) {
      int n=nums.size();
     int prev1=0;

int prev2=0;
     prev1=nums[0];
      if(n==1)return prev1;
      prev2=max(nums[0],nums[1]);
      if(n==2)return prev2;
    int ans=0;
      for(int i=2;i<n;i++){
        ans=max(nums[i]+prev1,prev2);
        prev1=prev2;
        prev2=ans;
      }
     
      return ans;
    }
};