class Solution {
public:
    string removeKdigits(string num, int k) {

        int n=num.size();
        if(k==n)return "0";
        stack<int>s;
      for(int i=0;i<n;i++){
        while(k&&!s.empty()&&num[s.top()]>num[i]){
            s.pop();
            k--;
        }
        s.push(i);
      }
      while(k--){
        s.pop();
      }
      string ans = "";

        while (!s.empty()) {
            ans += num[s.top()];
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
};