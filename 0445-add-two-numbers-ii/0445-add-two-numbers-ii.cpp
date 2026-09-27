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
    void reverseLL(ListNode* &head){
        if(!head||!head->next)return ;
        ListNode*pre=NULL;
        ListNode*curr=head;
        ListNode*fut=NULL;
        while(curr){
            fut=curr->next;
            curr->next=pre;
            pre=curr;
            curr=fut;
        }
        head=pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverseLL(l1);
        reverseLL(l2);
        ListNode*ans=new ListNode(0);
        ListNode*a=ans;
        int carry=0;
        while(l1&&l2){
           
            a->next=new ListNode((carry+l1->val+l2->val)%10);
            carry=(carry+l1->val+l2->val)/10;
            a=a->next;
            l1=l1->next;
            l2=l2->next;

        }
        while(l1){
           
            a->next=new ListNode((carry+l1->val)%10);
            carry=(carry+l1->val)/10;
            a=a->next;
            l1=l1->next;
           

        }
        while(l2){
           
            a->next=new ListNode((carry+l2->val)%10);
            carry=(carry+l2->val)/10;
            a=a->next;
          
            l2=l2->next;

        }
        if(carry){
    a->next = new ListNode(carry);
}
        reverseLL(ans->next);
        return ans->next;
    }
};