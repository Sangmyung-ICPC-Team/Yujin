class Solution {
private:
    int n;
    set<vector<int>>ans;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        vector<bool>visited(n,false);
        dfs(nums, visited, {});
        
        vector<vector<int>>out;
        for_each(ans.begin(), ans.end(), [&out](vector<int>tmp){
            out.push_back(tmp);
        });
        
        return out;
    }
    
    void dfs(vector<int>&nums, vector<bool>visited, vector<int>tmp){
        if(tmp.size()==n){
            ans.insert(tmp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=true;
                tmp.push_back(nums[i]);
                dfs(nums, visited, tmp);
                tmp.pop_back();
                visited[i]=false;
            }
        }
    }
    
};
