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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)return head;
        if(!head->next)return head;
        if(left==right)return head;
        ListNode *a=new ListNode(0);
        a->next=head;
        head=a;
        ListNode*flag1=NULL;
         ListNode*l=NULL;
        while(head){

            
             if(left==0){
                 l=head;
                 break;
             }
              flag1=head;
             head=head->next;
             
             left--;
             right--;
        }
        ListNode*pre=NULL;
        ListNode*curr=l;
        ListNode*fut=NULL;
        while(curr&&right>=0){
            fut=curr->next;
            curr->next=pre;
            pre=curr;
            curr=fut;
            right--;
        }
        flag1->next=pre;
       l->next=curr;
        return a->next;

    }
};