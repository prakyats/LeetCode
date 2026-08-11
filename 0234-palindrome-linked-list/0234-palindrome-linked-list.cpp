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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        vector<int> ans;
        if(head->next==NULL)
        return true;
        while(fast && fast->next){
         ans.push_back(slow->val);
         slow=slow->next;
         fast=fast->next->next;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        int i =0;
        reverse(ans.begin(),ans.end());
        while(slow){
            if(ans[i++]!=slow->val)
            return false;
            slow=slow->next;
        }
        return true;
    }
};