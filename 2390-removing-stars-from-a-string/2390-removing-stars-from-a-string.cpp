class Solution {
public:
    string removeStars(string s) {
      string ans="";
      int n=s.size();
      int i=n-1;
      int c=0;

      while(i>=0){
      if(s[i]=='*')c++;
      else{
        if(c){
            c--;
        }
        else{
            ans+=s[i];
        }
      }
      i--;
      } 
      reverse(ans.begin(),ans.end());
      return ans; 
    }
};