class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        
        int p=0; // 문자 가리키는 p
        int q=0; // 누적 길이를 저장
        for(int i=0;i<s.size();i++){
            int tmp;
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j])
                    tmp=j;
                    
            }
            p=(p<tmp-q ? tmp-q : p);
            
            if(i==p+q){
                ans.push_back(p+1);
                q=p+q+1;
                p=0;
            }
        }
        
        return ans;
    }
};
