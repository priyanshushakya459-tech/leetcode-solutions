class Solution {
public:
    int findLucky(vector<int>& arr) {
       int n=arr.size();
       unordered_map<int,int>m;
       for(int i=0;i<n;i++){
        m[arr[i]]++;
       } 
       int ans=-1;
       for(int i=0;i<n;i++){
        if(m[arr[i]]==arr[i])ans=max(arr[i],ans);
       }
       return ans;
    }
};