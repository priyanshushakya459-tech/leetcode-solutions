class Solution {
public:
int nos(vector<int>& nums, int k){
    int n=nums.size();
    int ans=0;
    int c=0;
    int i=0;
    int j=0;
    while(j<n){
        if(nums[j]%2==1){
            c++;
        }
        while(c>k){
        if(nums[i]%2==1){
            c--;
        }
        i++;
        }
        ans+=(j-i+1);
        j++;
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return nos(nums,k)-nos(nums,k-1); 
    }
};