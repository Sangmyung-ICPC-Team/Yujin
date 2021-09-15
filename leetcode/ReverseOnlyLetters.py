class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        def find_str(idx):
            i=idx
            for c in s[idx::-1]:
                if ord('A')<=ord(c)<=ord('Z') or ord('a')<=ord(c)<=ord('z'):
                    break
                i-=1
            
            return i
        
        result=""
        j=find_str(len(s)-1)
        for i in range(len(s)):
            if ord('A')<=ord(s[i])<=ord('Z') or ord('a')<=ord(s[i])<=ord('z') :
                result+=s[j]
                j=find_str(j-1)
            else:
                result+=s[i]
            
                
        return result
