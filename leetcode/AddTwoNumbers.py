# Defnition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head=curr=ListNode(-1)
        ceil=0
        while(l1 and l2):
            curr.next=ListNode((ceil+l1.val+l2.val)%10)
            
            ceil=(ceil+l1.val+l2.val)//10
            curr,l1,l2=curr.next,l1.next,l2.next
        
        while(l1):
            curr.next=ListNode((ceil+l1.val)%10)
            
            ceil=(ceil+l1.val)//10
            curr,l1=curr.next,l1.next
        while(l2):
            curr.next=ListNode((ceil+l2.val)%10)
            
            ceil=(ceil+l2.val)//10
            curr,l2=curr.next,l2.next
            
        if(ceil):
            curr.next=ListNode(ceil)
        return head.next
        
