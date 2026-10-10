class Solution {
public:
    int characterReplacement(string s, int k) {
       int mc=1;
       int ans=0;
       unordered_map<char,int>m;
       int i=0;
       int j=0;
       int n=s.size();
         while (j < s.size()) {
            m[s[j]]++;

            mc = max(mc, m[s[j]]);

            while ((j - i + 1) - mc > k) {
                m[s[i]]--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};