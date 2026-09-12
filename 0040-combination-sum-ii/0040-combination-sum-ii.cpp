class Solution {
public:
 void cs(vector<int>& candidates, vector<vector<int>>& ans,
            vector<int>& temp, int target, int index) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            // Duplicate skip
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);
            cs(candidates, ans, temp, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
      
       
     
  
       vector<vector<int>>ans;
        vector<int>temp;
        cs(candidates,ans,temp,target,0);
       
        
        return ans; 
    }
};