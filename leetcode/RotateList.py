# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        def getLength(head):
            if(head):
                return 1+getLength(head.next)
            else:
                return 0
    
        size=getLength(head)
        curr_b=head
        
        if size==0 or k==0 or k%size==0:
            return head
        
        for _ in range(size-(k%size)-1):
            curr_b=curr_b.next
        
        
        curr_f=curr_b
        for _ in range(k%size):
            curr_f=curr_f.next
        
        curr_f.next=head
        
        head_=curr_b.next
        curr_b.next=None
        
        return head_
