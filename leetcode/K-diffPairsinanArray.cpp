class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m; // begin() end()
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        int cnt=0;
        for(auto tmp: m){
            if(m.find(tmp.first-k)!=m.end()){
                if(k)
                    cnt++;
                else
                    cnt+=(tmp.second>=2?1:0);
            }
        }
        
        return cnt;
    }
};
