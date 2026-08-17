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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next==nullptr){
            head=head->next;
            return head;
        }

        ListNode* sptr=head;
        ListNode* fptr=head;

        for(int i=0; i<n;i++){
            fptr=fptr->next;

        }

        if(fptr==nullptr){
            ListNode* t=head;
            head=head->next;
            delete t;
            return head;

        }

        while(fptr->next!=nullptr){
            fptr=fptr->next;
            sptr=sptr->next;
        }

        ListNode* temp= sptr->next;
        sptr->next=sptr->next->next;
        delete(temp);

        return head;
        
    }
};
