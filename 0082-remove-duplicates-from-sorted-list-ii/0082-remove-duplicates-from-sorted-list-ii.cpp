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
        
        ListNode *ans=new ListNode(0);
        ListNode* a=ans;
        while(head){
           if(head->next&&head->next->val==head->val){
               while(head->next->val==head->val){
                   head=head->next;
                   if(head->next==NULL)break;
               }
           }
           else{
               ans->next=head;
               ans=ans->next;
               
           }
           head=head->next; 
        }
        ans->next=NULL;
        return a->next;   
    }
};