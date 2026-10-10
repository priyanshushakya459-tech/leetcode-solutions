class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
               int r=k;
               int i=0;
               int j=0;
               
               while(j<n){

                  
                      if(nums[j]==0)k--;
                  
                     
                  
                  while(k==-1){
                      if(nums[i]==0)k++;
                      i++;
                  }
                   ans=max(ans,j-i+1);
                  j++;
               }
               return ans;
    }
};