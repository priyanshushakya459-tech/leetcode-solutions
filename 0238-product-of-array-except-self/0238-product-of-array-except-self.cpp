class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pes(n,1);
        for(int i=1;i<n;i++){
            pes[i]=nums[i-1]*pes[i-1];
        }
        int suffix=1;
        for(int i=n-2;i>=0;i--){
            pes[i]*=(suffix*nums[i+1]);
            suffix*=nums[i+1];
        }
        return pes;
    }
};