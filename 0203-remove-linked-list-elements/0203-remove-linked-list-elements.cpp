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
        ListNode *curr = head, *prev = NULL;
        if (head == NULL)
            return head;
        while (curr != NULL) {

            if (curr->val == val) {

                if (curr == head) {
                    head = head->next;
                    curr=head;
                } else {
                    if(curr->next!=NULL){
                    prev->next = curr->next;
                    curr=curr->next;
                    }
                    else{
                    curr=curr->next;
                    prev->next = NULL;
                    }
                }

            } else {

                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};