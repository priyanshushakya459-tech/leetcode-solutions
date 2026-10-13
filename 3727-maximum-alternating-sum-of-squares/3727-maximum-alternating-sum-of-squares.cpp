class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        int mid=ceil(n/2);
        for(int i=0;i<n;i++){
            if(nums[i]<0)nums[i]=-nums[i];
        }
        long long pos=0;
        long long neg=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<mid;i++){
            pos+=nums[i]*nums[i];
        }
        for(int j=mid;j<n;j++){
            neg+=nums[j]*nums[j];
        }
        return neg-pos;

        
    }
};