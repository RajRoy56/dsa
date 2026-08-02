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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum=new ListNode(0);
        ListNode* head=sum;
        ListNode* tail=sum;
       
        int carry=0;

        while(l1 && l2){
            
             int total=(l1->val + l2->val + carry);
             ListNode* temp=new ListNode(total % 10);
            carry=(total)/10;
            tail->next=temp;
            tail=temp;
            l1=l1->next;
            l2=l2->next;
        }

        while(l1){
             int total=(l1->val  + carry);
             ListNode* temp=new ListNode(total % 10);
            carry=(total)/10;
            tail->next=temp;
            tail=temp;
             l1=l1->next;
    
        }
         while(l2){
              int total=(l2->val  + carry);
             ListNode* temp=new ListNode(total % 10);
            carry=(total)/10;
            tail->next=temp;
            tail=temp;
            l2=l2->next;
        }

        while(carry){
            int total=( carry);
            ListNode* temp=new ListNode(total % 10);
            carry=(total)/10;
            tail->next=temp;
            tail=temp;
        }
        
        ListNode *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
};