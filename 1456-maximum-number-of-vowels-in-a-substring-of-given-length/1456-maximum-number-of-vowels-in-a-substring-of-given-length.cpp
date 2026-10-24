class Solution {
public:
    int maxVowels(string s, int k) {
     int n=s.size();
        int w=0;
        int i=0;
        for( i=0;i<k;i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')w++;
        }
        int ans=w;
        int st=0;
        while(i<n){
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')w++;
           if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u')w--;
           i++;
           st++;
           ans=max(ans,w);
        }
        return ans;
    }
};