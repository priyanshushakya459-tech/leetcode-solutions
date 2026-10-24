class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int c=1;
        int ans=1;
        
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]+1){
                c++;

            }
            else c=1;
   ans=max(ans,c);
        }
    
        return ans;
    }
};