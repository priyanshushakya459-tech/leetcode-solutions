class Solution {
public:
int nos(string s,int k){
    int n=s.size();
    vector<int>c(3,0);
    int count=0;
    int ans=0;
    int i=0;
    int j=0;
    while(j<n){
    if(c[s[j]-'a']==0){
        count++;}
        c[s[j]-'a']++;
    
    while(count>k){
         c[s[i]-'a']--;
         if(c[s[i]-'a']==0){
            count--;
         }
         i++;
    }
    ans+=(j-i+1);
    j++;
    }
   return ans;
}
    int numberOfSubstrings(string s) {
        return nos(s,3)-nos(s,2);
    }
};