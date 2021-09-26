class Solution:
    def tribonacci(self, n: int) -> int:
        fibo=[0,1,1]
        
        for i in range(2,n):
            fibo.append(sum(fibo[i-2:i+1]))
            
        return fibo[n]
    
