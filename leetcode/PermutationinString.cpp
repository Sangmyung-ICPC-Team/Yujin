class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        
        bool stopped=false;
        vector<int>table(26,0);
        for(int i=0;i<s1.size();i++)
            table[s1[i]-'a']++;
             
        for(int i=0;i<=s2.size()-s1.size();i++){
            if(table[s2[i]-'a']==0) 
                continue;
           
            int size=s1.size();    
            vector<int>tmp=table;
            for(int j=i;j<i+s1.size();j++){
                if(tmp[s2[j]-'a']==0)
                    break;
                tmp[s2[j]-'a']--;
                size--;
            }
            
            if(size==0){
                stopped=true;
                break;
            }
        }
        
        
        return stopped;
    }
};
