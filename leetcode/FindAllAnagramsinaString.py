class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        # from collections import defaultdict
        pCount=defaultdict(int)
        sCount=defaultdict(int)
        for c in p:
            pCount[c]+=1
        for c in s[0:len(p)-1]:
            sCount[c]+=1
            
        ans=[]
        for i in range(len(p)-1,len(s)):
            sCount[s[i]]+=1
            if sCount==pCount:
                ans.append(i-len(p)+1)
            sCount[s[i-len(p)+1]]-=1
            if sCount[s[i-len(p)+1]]==0: # if (abaebab, aba) , remove e's area
                del sCount[s[i-len(p)+1]] 
          
        return ans
