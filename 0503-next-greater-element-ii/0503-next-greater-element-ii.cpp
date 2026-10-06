class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        stack<int>s;
        int i=0;
    while(i<2*n){
            while(!s.empty()&&nums[s.top()]<nums[i]){
                ans[s.top()]=nums[i];
                s.pop();
            }
            if(i<n){
                s.push(i);
            }
            i++;
        }
        return ans;
    }
};