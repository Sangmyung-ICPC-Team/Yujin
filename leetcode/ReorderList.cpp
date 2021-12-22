/* Definition for singly-linked list.
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
    void reorderList(ListNode* head) {
        vector<int>num;
        for(ListNode*cur=head; cur; cur=cur->next)
            num.push_back(cur->val);
        
        ListNode*cur=head;
        for(int i=0;i<(int)num.size()/2;i++){
            cur->val=num[i];
            cur=cur->next;
            cur->val=num[num.size()-1-i];
            cur=cur->next;
        }
        if(num.size()%2)
            cur->val=num[(int)(num.size()/2)];
        
    }
};
