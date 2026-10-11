class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>m;
       int sum=0;
       int ans=0;
       for(int i=0;i<n;i++){
 if(sum+nums[i]==k)ans++;
 if(m[sum+nums[i]-k]>0)ans+=m[sum+nums[i]-k];
 m[sum+nums[i]]++;
 sum+=nums[i];
       } 
       return ans;
    }
};