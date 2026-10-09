class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>s;
        int i=0;
        while(i<n){
            while(!s.empty()&&asteroids[s.top()]>0&&asteroids[i]<0&&asteroids[s.top()]<abs(asteroids[i])){
                s.pop();
            }
            if(!s.empty()&&asteroids[s.top()]>0&&asteroids[i]<0&&asteroids[s.top()]>abs(asteroids[i])){
            i++;
            }
            else if(!s.empty()&&asteroids[s.top()]>0&&asteroids[i]<0&&asteroids[s.top()]==abs(asteroids[i])){
                s.pop();
                i++;
            }
            else{
                s.push(i);
                i++;
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(asteroids[s.top()]);
         s.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};