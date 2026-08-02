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
   ListNode* rev(ListNode* current,ListNode *prev){
        if(!current){
            return prev;
        }
        ListNode* front=current->next;
        current->next=prev;
       return rev(front,current);
    }
    ListNode* reverseList(ListNode* head) {
        return rev(head,NULL);
    }
};