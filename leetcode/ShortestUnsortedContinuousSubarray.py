class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        sortNum=sorted(nums)
        i,j=0,len(nums)-1
        if nums==sortNum:
            return 0
        
        for i in range(len(nums)):
            if nums[i]!=sortNum[i]:
                break
        for j in range(j,-1,-1):
            if nums[j]!=sortNum[j]:
                break
                
                
        return j-i+1
