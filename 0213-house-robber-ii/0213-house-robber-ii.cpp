class Solution {
public:
int  hr(vector<int>& nums,int si,int li){
    int prev1=0;
    int prev2=0;
   if(li>=si){
prev1=nums[si];}

    if(li==si)return prev1;
    if(li>=si+1){
    prev2=max(nums[si],nums[si+1]);}
    if(li==si+1)return prev2;
    int ans=0;
    for(int i=si+2;i<=li;i++){
        ans=max(nums[i]+prev1,prev2);
        prev1=prev2;
        prev2=ans;
    }
    return ans;

}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        return max(hr(nums,0,n-2),hr(nums,1,n-1));
    }
};