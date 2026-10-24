class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int w=0;
        int i=0;
        for( i=0;i<k;i++){
if(blocks[i]=='W')w++;
        }
        int ans=w;
        int st=0;
        while(i<n){
           if(blocks[i++]=='W')w++;
           if(blocks[st++]=='W')w--;
           ans=min(ans,w);
        }
        return ans;
    }
};