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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode*ans=new ListNode(0);
        ListNode*temp=head;
        ListNode*lastprev=ans;
        ans->next=head;
        
        while(1){

int n = 2;
            temp = lastprev->next;
         while(n--){
            if(!temp)return ans->next;
            temp=temp->next;
            
         }
 ListNode* curr = lastprev->next;
            ListNode* pre = temp;
            ListNode* fut = NULL;
              n = 2;

            ListNode* groupStart = curr;
            
            while(n--) {
                fut = curr->next;
                curr->next = pre;
                pre = curr;
                curr = fut;
            }
              lastprev->next = pre;
     lastprev = groupStart;
        }
        return ans->next;
    }
};