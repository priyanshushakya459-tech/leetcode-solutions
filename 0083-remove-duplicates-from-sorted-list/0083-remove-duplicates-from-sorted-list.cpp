/**
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        if(!head->next)return head;
        ListNode*pre=head;
        head=head->next;
        ListNode*ans=pre;
       
       
        // ans=ans->next;
       
        ListNode*a=ans;
        while(head){
            if(head->val==pre->val){
                
            }
            else{
                ans->next=head;
                ans=ans->next;
                pre=head;
            }
head=head->next;
        }
        ans->next=NULL;
        return a;
    }
};