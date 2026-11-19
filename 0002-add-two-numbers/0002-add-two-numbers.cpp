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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*tem1=NULL;
        ListNode*tem2=NULL;
        int a=0,b=0;
        while(temp1){
            a++;
            tem1=temp1;
            temp1=temp1->next;
        }
        while(temp2){
            b++;
            tem2=temp2;
            temp2=temp2->next;
        }
        temp1=l1;
        temp2=l2;
        int c=0;
        if(a>=b){
            int t=0;
           while(temp2){
            t=temp1->val+temp2->val+c;
               temp1->val=t%10;
               c=t/10;
                temp1=temp1->next;
                 temp2=temp2->next;
           }
           while(temp1&&c){
            t=temp1->val+c;
            temp1->val=t%10;
               c=t/10;
                temp1=temp1->next;

           }
        if(c){
            tem1->next=new ListNode(c);
        }
        return l1; 
        }
        else{
             int t=0;
           while(temp1){
            t=temp1->val+temp2->val+c;
               temp2->val=t%10;
               c=t/10;
                temp1=temp1->next;
                 temp2=temp2->next;
           }
           while(temp2&&c){
            t=temp2->val+c;
            temp2->val=t%10;
               c=t/10;
                temp2=temp2->next;

           }
        if(c){
            tem2->next=new ListNode(c);
        }
        return l2; 
        }
      return NULL;  
    }
};