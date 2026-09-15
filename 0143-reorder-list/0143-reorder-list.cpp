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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split into two halves
        ListNode* head1 = head;
        ListNode* head2 = slow->next;
        slow->next = NULL;

        // Step 2: Reverse second half
        ListNode* curr = head2;
        ListNode* pre = NULL;
        ListNode* fut = NULL;

        while (curr) {
            fut = curr->next;
            curr->next = pre;
            pre = curr;
            curr = fut;
        }

        head2 = pre;

        // Step 3: Merge alternately
        while (head1 && head2) {
            ListNode* next1 = head1->next;
            ListNode* next2 = head2->next;

            head1->next = head2;
            head2->next = next1;

            head1 = next1;
            head2 = next2;}
    }
};