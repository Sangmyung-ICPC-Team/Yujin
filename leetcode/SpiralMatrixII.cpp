class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n,0));
        int num=1,start=0,end=n-1;
        while(num<=n*n){
            for(int i=start;i<=end;i++)
                ans[start][i]=num++;
            for(int i=start+1;i<=end;i++)
                ans[i][end]=num++;
            
            for(int i=end-1;i>=start;i--)
                ans[end][i]=num++;
            for(int i=end-1;i>start;i--)
                ans[i][start]=num++;
            
            start++;
            end--;
        }
        
        return ans;
    }
};
