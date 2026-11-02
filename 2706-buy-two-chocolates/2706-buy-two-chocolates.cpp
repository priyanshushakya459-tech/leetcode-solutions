class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
      int fm=INT_MAX;
      int sm=INT_MAX;
      int n=prices.size();
      for(int i=0;i<n;i++){
        if(prices[i]<fm){
            sm=fm;
        fm=min(fm,prices[i]);}
        else{
            sm=min(sm,prices[i]);
        }
        
       
      }
      if((fm+sm)>money)return money;
      return money-(fm+sm);

    }
};