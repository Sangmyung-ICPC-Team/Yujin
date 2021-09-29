# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        # head는 ListNode 연결리스트 
        # 반환할 형태는 리스트 (연결리스트 next를 끊어주어야함)
        
        curr=head
        n=0
        while(curr):
            n+=1
            curr=curr.next
            
            
        p,q=n//k,n%k
        ans=[]
        curr=head
        
        for i in range(k):
            if p>0:
                ans.append(curr)    
                for _ in range(p-1):
                    curr=curr.next

                if i<q:
                    curr=curr.next
                    
                curr.next,curr=None,curr.next
            else:
                if i<q:
                    ans.append(curr)
                    curr.next,curr=None,curr.next
                else:
                    ans.append(None)
                
            
            
        return ans
        
