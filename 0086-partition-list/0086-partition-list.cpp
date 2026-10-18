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
    ListNode* partition(ListNode* head, int x) {
       if(!head)return NULL;
       ListNode*first=new ListNode(0);
       ListNode*f=first;
       ListNode*sec=new ListNode(0);
       ListNode*s=sec;
       ListNode*temp=head;
       while(temp){

        if(temp->val>=x){
            s->next=temp;
            s=s->next;

        }
        else{
        f->next=temp;
        f=f->next;
        }
        temp=temp->next;
       }
       f->next=NULL;
       s->next=NULL;
       f->next=sec->next;
       return first->next;

    }
};