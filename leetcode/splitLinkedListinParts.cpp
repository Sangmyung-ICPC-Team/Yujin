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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size=0;
        for(ListNode*curr=head; curr; curr=curr->next)
            size++;
        
        
        int p=size/k,q=size%k;
        vector <ListNode*> ans;
        
        for(int i=0;i<k;i++){
            if(p>0){
                ans.push_back(head);
                for(int j=1;j<p;j++)
                    head=head->next;
                
                if(i<q)
                    head=head->next;
                
                ListNode*temp=head->next;
                head->next=NULL;
                head=temp;
                
            }else{
                if(i<q){
                    ans.push_back(head);
                    ListNode*temp=head->next;
                    head->next=NULL;
                    head=temp;
                }
                else
                    ans.push_back(NULL);
            }
        }
        
        
        return ans;
    }
};
