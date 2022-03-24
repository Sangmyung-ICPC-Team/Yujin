class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        def bsearch(left,right):
            nonlocal limit
            if left<right:
                if people[left]+people[right]<=limit:
                    return bsearch(left+1,right-1)+1
                else:
                    return bsearch(left,right-1)+1
            else:
                return 1 if left==right else 0 
            
        people.sort()
        return bsearch(0,len(people)-1)
    
