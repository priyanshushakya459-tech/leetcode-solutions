class Solution {
public:
    string removeDuplicates(string s, int k) {
          string ans="";
        stack<pair<char,int>>st;
        int c=0;
        for(int i=0;i<s.size();i++){
        
        
        if(!st.empty()&&st.top().first==s[i]){
            st.push({s[i],st.top().second+1});
          c=st.top().second;
            if(c==k){
                while(c--){
st.pop();
                }
            }
        }
        else    { st.push({s[i],1});
        }
        }
        while(!st.empty()){
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};