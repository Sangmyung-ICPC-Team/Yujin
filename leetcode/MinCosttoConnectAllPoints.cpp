class Solution {
public:
    int getParent(vector<int>&uf, int p){
        if(p==uf[p])
            return p;
        
        uf[p]=getParent(uf, uf[uf[p]]);
        return uf[p];
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<vector<int>>hq;        
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++)
                hq.push({-1*(abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1])), i, j});
        }
        
        vector<int>uf(points.size()); //union find
        iota(uf.begin(),uf.end(),0);       
        
        int ans=0,edge=0;
        while(edge<points.size()-1){
            vector<int>top=hq.top();
            int p1=getParent(uf,top[1]);
            int p2=getParent(uf,top[2]);
            
            if(p1!=p2){
                uf[p2]=p1;
                ans+=-1*top[0];
                edge++;
            }
            
            hq.pop();
        }
        
        return ans;
    }
};
