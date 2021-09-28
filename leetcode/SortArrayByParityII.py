class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        even,odd=0,1
        answer=[0]*len(nums)
        
        for n in nums:
            if n%2==0:
                answer[even]=n
                even+=2
            else:
                answer[odd]=n
                odd+=2
                
        return answer
        
