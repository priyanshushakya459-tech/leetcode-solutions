class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int r=k;
        int i=0;
        int j=0;
        int a=0;
        int at=0;
        while(j<n){
            
            if(nums[j]==1){
                at=i;
                j++;
                a++;
                
                ans=max(ans,a);
            }
            else if(nums[j]==0&&k--){
                j++;
                a++;
                ans=max(ans,a);
            }
            else{
                j=++at;
                i=j;
                
                a=0;
                k=r;
            }
        }
        return ans;
    }
};