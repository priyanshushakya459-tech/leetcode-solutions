class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
       int n=arr.size();
       int mod=1e9+7;
       stack<int>s1;
       stack<int>s2;
       vector<int>nse(n,n);
       vector<int>pse(n,-1); 
       for(int i=0;i<n;i++){
        while(!s1.empty()&&arr[s1.top()]>arr[i]){
            nse[s1.top()]=i;
            s1.pop();
        }
        s1.push(i);
       }
       for(int i=n-1;i>=0;i--){
         while(!s2.empty()&&arr[s2.top()]>=arr[i]){
            pse[s2.top()]=i;
            s2.pop();
        }
        s2.push(i);
       }
       int ans=0;
    for(int i=0;i<n;i++){
        ans=(ans+((nse[i]-i)*(i-pse[i])*1LL*arr[i])%mod)%mod;
    }  
    return ans; 
    }
};