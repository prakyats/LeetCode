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
    ListNode* middleNode(ListNode* head) {
        //   ListNode* temp=head;
        // int x=0;
        // while(temp){
        //     temp=temp->next;
        //     x++;
        // }
        // if(x==1)
        // return head;
        
        // int mid=(x/2);
        // temp=head;
        // while(mid--){
        //     temp=temp->next;
        // }
        // return temp;

        //using slow/fast approach
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};