# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if(head==None):
            return head
        
        temp=curr=ListNode(-1)
        p=-math.inf
        check=True
       
        while(head):
            if(p!=head.val):
                if(check):
                    p=head.val
                    check=False
                else:
                    curr.next=ListNode(p)
                    p=head.val
                    curr=curr.next
            else:
                check=True
            head=head.next
       
        curr.next=ListNode(p) if(check==False) else None
        
        return temp.next
