class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>cnt(26,0);
        for(int i=0;i<s.size();i++)
            cnt[s[i]-'a']++;
        
        int pos=0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] < s[pos]) pos = i;
            if (--cnt[s[i]- 'a'] == 0) break;
        }
        
        string tmp="";
        tmp+=s[pos];
        return s.length() == 0 ? "" : s[pos] + removeDuplicateLetters(regex_replace(s.substr(pos + 1), regex(tmp), ""));
    }
};
