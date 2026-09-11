class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int ind=0;
        for(int i=0;i<n;i=i+2){
            ans[i]=(pos[ind++]);
        }
        ind=0;
         for(int i=1;i<n;i=i+2){
            ans[i]=(neg[ind++]);
        }
        return ans;
        
    }
};