class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n=candies.size();
       vector<bool>can(n);
       int mc=INT_MIN;
       for(int i=0;i<n;i++){
        mc=max(mc,candies[i]);
    
       }
       for(int i=0;i<n;i++){
       if(candies[i]+extraCandies>=mc)can[i]=1;
       else can[i]=0;
    
       } 
return can;
    }
};