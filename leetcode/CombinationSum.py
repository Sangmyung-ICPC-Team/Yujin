class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        def dfs(n,s):
            if s<0:
                return 
            elif s==0:
                ans.append(tmp[:])
                return 
            
            for i in range(n,len(candidates)):
                tmp.append(candidates[i])
                dfs(i,s-candidates[i])
                tmp.pop()
        ans=[]
        tmp=[]
        dfs(0,target)
        
        return ans
    
    
