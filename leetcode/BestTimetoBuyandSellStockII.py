class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low,high=prices[0],prices[0]
        ans=0
        check=False # descending -> ascending part check
        
        for i in range(len(prices)-1):
            if prices[i]>prices[i+1]:
                if check:
                    ans+=high-low
                low=prices[i+1]
                check=False
            else:
                check=True
                high=prices[i+1]
                
                
        return ans+high-low if check else ans
