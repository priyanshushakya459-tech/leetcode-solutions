class Solution {
public:
void cs(vector<int>& candidates,vector<vector<int>> &ans,vector<int>&temp,int target,int index){
    
    if(target==0){
        ans.push_back(temp);
        return ;
    }
      // Duplicate skip
            // if ( index>0 && candidates[index] == candidates[index - 1])
            //     continue;

    if(candidates.size()==index||target<0){
        return ;
    }
   

    temp.push_back(candidates[index]);
    cs(candidates,ans,temp,target-candidates[index],index+1);
    temp.pop_back();
    // temp.push_back(cadidates[index]);
    while(index+1<candidates.size()&&candidates[index]==candidates[index+1]){index++;

    }
    cs(candidates,ans,temp,target,index+1);
   
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
      
       
     
  
       vector<vector<int>>ans;
        vector<int>temp;
        cs(candidates,ans,temp,target,0);
       
        
        return ans; 
    }
};