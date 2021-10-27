class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # use Counting Sort 
        # time complexity 2*O(N)
        
        
        table=[0,0,0]
        for n in nums:
            if n==0:
                table[0]+=1
            elif n==1:
                table[1]+=1
            else:
                table[2]+=1
            
        p=0
        for i in range(len(nums)):
            while not table[p]:
                p+=1
            nums[i]=p
            table[p]-=1
            
    
