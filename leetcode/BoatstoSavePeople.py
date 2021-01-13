class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        cnt=0
        i,j=0,len(people)-1
        people.sort()
        
        while(i<=j):
            cnt+=1
            if(people[i]+people[j]<=limit):
                i+=1
            j-=1
            
        return cnt
            
        
        
