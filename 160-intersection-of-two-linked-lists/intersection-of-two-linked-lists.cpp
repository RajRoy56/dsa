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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1=headA;
        ListNode *ptr2=headB;
        int count1=0,count2=0;
        
        //count nodes in one branch
        while(ptr1){
            count1++;
            ptr1=ptr1->next;
        }
        //count nodes on 2nd branch
        
        while(ptr2){
            count2++;
            ptr2=ptr2->next;
        }
        
        //reset pointers
        
        ptr1=headA; ptr2=headB;
        
        // eqalise both pointer
        while(count1>count2){
            ptr1=ptr1->next;
            count1--;
        }
        while(count2>count1){
            count2--;
            ptr2=ptr2->next;
        }
        if(!ptr1 || !ptr2){
            return NULL;
        }
        //check for the node 
        
        while(ptr1 != ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        return ptr1;
    }
};