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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;

        }
        ListNode*ans=new ListNode(0);
        ListNode*a=ans;
        while(head){
            if(m[head->val]){
                head=head->next;
            }
            else{
                ans->next=head;
                ans=ans->next;
                head=head->next;
            }
        }
        ans->next=NULL;
        return a->next;
    }
};