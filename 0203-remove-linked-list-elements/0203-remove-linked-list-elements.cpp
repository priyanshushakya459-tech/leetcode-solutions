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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return head;
        if(head->next==NULL&&head->val==val)return NULL;
        ListNode*ans=NULL;
        ans=new ListNode(0);
        ListNode* a=ans;
        ListNode*temp=head;
        while(head){
if(head->val==val){
    head=head->next;
}
else{
a->next=head;
head=head->next;
a=a->next;}
        }
        a->next=NULL;
        return ans->next;
    }
};