class Solution {
public:
long long powe(long long x,long long n){
    long long  a=1;
    while(n){
    if(n%2==1){
    a=(a*x)%(1000000007);
    }
    x=(x*x)%(1000000007);
    n/=2;}
    return a;
}
    int countGoodNumbers(long long n) {
        long long  ans=0;
        long long odd=n/2;
        long long even=n-odd;
return (powe(4,odd)*powe(5,even))%(1000000007);
return ans;
    }
};