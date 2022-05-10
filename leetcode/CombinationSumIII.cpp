class Solution {
private: 
    int K;
    int N;
public:
    bool visited[10]={false,};
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        K=k;
        N=n;
        dfs(1,{},0);
        return ans;
    }
    
    void dfs(int i_, vector<int>tmp, int sum){
        if(tmp.size()==K-1){
            if(N-sum<=9 && !visited[N-sum] && tmp.back()<N-sum){
                tmp.push_back(N-sum);
                ans.push_back(tmp);
                tmp.pop_back();
            }
            return ;
        }
        for(int i=i_;i<=9;i++){
            if(sum+i>=N)
                break;
            visited[i]=true;
            tmp.push_back(i);
            dfs(i+1, tmp, sum+i);
            tmp.pop_back();
            visited[i]=false;
        }
    }
};
