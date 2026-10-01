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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev=head;
        ListNode* slow=head;
        ListNode* fast=head;
        //handle edge case
        if(fast->next==NULL) return NULL;
        if(fast->next->next ==NULL){
            slow= slow->next;
            delete slow;
            prev->next=NULL;
            return head;
        }

        while(fast->next && fast->next->next){

            prev=slow;
            fast=fast->next->next;
            slow=slow->next;
        }

        if(fast->next){
            prev=slow;
            fast=fast->next;
            slow=slow->next;
        }

        prev->next=slow->next;
        delete slow;
        return head;
    }
};