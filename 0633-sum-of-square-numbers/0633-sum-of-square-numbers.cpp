class Solution {
public:
    bool judgeSquareSum(int c) {
        int st=0;
        int end=pow(c,.5);
        while(st<=end){
            if(((st*st*1ll)+(end*end*1ll))>c)end--;
            else if(((st*st*1ll)+(end*end*1ll))<c)st++;
            else{
                return true;
            }
        }
        return false;
    }
};