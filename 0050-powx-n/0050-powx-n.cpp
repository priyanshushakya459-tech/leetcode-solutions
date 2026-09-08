class Solution {
public:
    double myPow(double x, int n) {
      long long m=n;
       if(m==0)return 1;
        if(x==0)return 0;
      if(m<0){
        m=-m;
        x=1/x;

      }
      double ans=1.0;
     
      while(m){
        if(m%2){
        ans*=x;}
        x=x*x;
        m/=2;

      }
      return ans;
    }
};