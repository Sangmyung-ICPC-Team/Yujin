# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=[]
        p=head
        while(p):
            temp.append(p.val)
            p=p.next
            
        result=p=ListNode(-1)
        for i in range(len(temp)-1,-1,-1):
            p.next=ListNode(temp[i])
            p=p.next
            
        
        return result.next
        
