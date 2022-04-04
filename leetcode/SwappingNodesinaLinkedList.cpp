/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int size=0;
        ListNode*front=head,*end=head;
        for(ListNode*curr=head;curr;curr=curr->next)
            size++;
            
        for(int i=0;i<k-1;i++)
            front=front->next;
        for(int i=size-k;i>0;i--)
            end=end->next;
        
        swap(front->val, end->val);
        return head;
    }
};
