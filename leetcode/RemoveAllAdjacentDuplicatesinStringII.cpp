class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>c;
        
        for(int i=0;i<s.size();i++){
            if(c.empty() || c.back().first!=s[i])
                c.push_back({s[i],1});
            else if(++c.back().second==k)
                c.pop_back();
        }
        
        string ans="";
        for(auto p:c)
            ans.append(p.second,p.first);
        
        return ans;
    }
};
