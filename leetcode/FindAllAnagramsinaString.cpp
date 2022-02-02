class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size()){ // prevent overflow
            vector<int>ans;
            return ans;
        }
            
        
        vector<int> sCount(26,0);
        vector<int> pCount(26,0);
        
        for(int i=0;i<p.size();i++)
            pCount[p[i]-'a']++;
        
        for(int i=0;i<p.size()-1;i++)
            sCount[s[i]-'a']++;
    
        vector<int>ans;
        for(int i=p.size()-1; i<s.size(); i++){
            sCount[s[i]-'a']++;
            if(sCount==pCount)
                ans.push_back(i-p.size()+1);
            sCount[s[i-p.size()+1]-'a']--;
        }
    
        return ans;
    }
        
};
