class Solution {
public:
bool helper(string s,int st,int end){
    while(st<end){
        if(s[st]!=s[end])return false;
        st++;
        end--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.size();
        int st=0;
        int end=n-1;
        if(n==1||n==2)return true;
        int flag=0;
        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
               return helper(s,st,end-1)||helper(s,st+1,end); 
               
              
            }
        }
        return true;
    }
};