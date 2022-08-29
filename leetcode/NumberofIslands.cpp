class Solution {
private:
    int m,n;
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        m=grid.size(), n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
    
    void dfs(vector<vector<char>>& grid, int y, int x){
       if(x<0 || x>=n || y<0 || y>=m || grid[y][x]=='0')
            return ;
            
        grid[y][x]='0';
        dfs(grid, y-1, x);
        dfs(grid, y, x+1);
        dfs(grid, y+1, x);
        dfs(grid, y, x-1);
    }
};
