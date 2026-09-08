class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();
      int me=nums[0];
      int freq=0;
      for(int i=0;i<n;i++){
        if(freq==0) me=nums[i];
        if(nums[i]==me) freq++;
        else {freq--;}
       
      }  
      return me;
    }
};