class Solution {
public:
    int climbStairs(int n) {
      int prev=1;
      int prev2=2;
      int ans=0;
      if(n==1||n==2)return n;
      for(int i=3;i<=n;i++){
        ans=(prev+prev2);
        prev=prev2;
        prev2=ans;
      }  
      return ans;
    }
};