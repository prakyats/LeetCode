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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *curr=head,*temp=NULL,*temphead=NULL;
        if(head == NULL || head->next == NULL)
    return head;
        int count=0;
        while(curr){
            curr=curr->next;
            count++;
        }
        k=k%count;
    if(k == 0)
    return head;
        count=count-k;
        curr=head;
        while(--count){
          curr=curr->next;
        }
        temp=curr->next;
        temphead=temp;
        curr->next=NULL;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        return temphead;
    }
};