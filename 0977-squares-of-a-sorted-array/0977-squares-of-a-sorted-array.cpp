class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        int n=nums.size();
        while(i<n&&nums[i]<0){
i++;
        }
        if(i==n){
            i=n-1;
            while(i>=0){
ans.push_back(nums[i]*nums[i]);
i--;
            }
        }
        else{
            int j=i-1;
            while(i<n){
            if(j>=0&&(nums[j]*nums[j])<(nums[i]*nums[i])){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
         while(j>=0){
           
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        
        }
        return ans;
    }
};