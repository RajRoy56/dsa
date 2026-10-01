/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp = node->next;
        ListNode *prev=node;
        while(temp){
            prev=node;
            node->val=temp->val;
            temp=temp->next;
            node= node->next;
            
        }
        delete node;
        prev->next= NULL;
        
    }
};