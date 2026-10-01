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
    ListNode* oddEvenList(ListNode* head) {
        // handle edge case
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *temp=even;


        while(odd && odd->next && even && even->next){
            ListNode* newodd = odd->next->next;
            odd->next = newodd;
            odd=newodd;

            ListNode* neweven = even->next->next;
            even->next = neweven;
            even=neweven;
        }
        odd->next = temp;
        return head;
    }
};