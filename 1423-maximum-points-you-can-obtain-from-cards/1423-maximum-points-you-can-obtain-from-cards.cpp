class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ws=n-k;
        int ts=0;
        for(int val:cardPoints){
            ts+=val;
        }
        int ms=0;
        for(int i=0;i<ws;i++){
            ms+=cardPoints[i];
        }
        int j=ws;
        int i=0;
        int wa=ms;
        while(j<n){
            ms-=cardPoints[i];
            ms+=cardPoints[j];
        wa=min(wa,ms);
        i++;
        j++;

        }
        return ts-wa;

    }
};