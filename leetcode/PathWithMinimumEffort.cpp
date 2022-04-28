const int INF=1000000;
class Solution {
private:
    int rSize;
    int cSize;
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};
    int minimumEffortPath(vector<vector<int>>& heights) {
        rSize=heights.size(); cSize=heights[0].size();
        
        vector<vector<int>>dp(rSize,(vector<int>(cSize, INF)));
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{0,0}});
        
        dp[0][0]=0;
        while(!q.empty()){
            pair<int,pair<int,int>> p=q.front();
            int dis=p.first;
            
            for(int i=0;i<4;i++){
                int x=p.second.second+dx[i];
                int y=p.second.first+dy[i];
                
                if(isValid(y,x)){
                    int cmp=max(abs(heights[p.second.first][p.second.second]-heights[y][x]), dis);
                    if(dp[y][x]>cmp){
                        q.push({cmp,{y,x}});
                        dp[y][x]=cmp;       
                    }
                }
            }
            q.pop();
        }
                    
        
        return dp[rSize-1][cSize-1];
    }
    
    bool isValid(int r,int c){
        return r>=0 && r<rSize && c>=0 && c<cSize;
    }
    
};
