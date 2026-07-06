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
    void reorderList(ListNode* head) {
        if(head->next==nullptr){
            return; 
        }
        
        if(head->next->next==nullptr){
            return; 
        }

//get middle
ListNode* sptr=head;
ListNode* fptr=head;

while(fptr->next!=nullptr && fptr->next->next!=nullptr){
fptr=fptr->next->next;
sptr=sptr->next;
}


//break link and reverse second half

ListNode* secondHead= sptr->next;

sptr->next=nullptr;

ListNode* prev=nullptr;
ListNode* curr=secondHead;

while(curr!=nullptr){
ListNode* n = curr->next;
curr->next=prev;
prev=curr;
curr=n;
}

//weave

ListNode* first= head;
ListNode* second = prev;

while(second!=nullptr){
ListNode* firstNext= first->next;
ListNode* secondNext= second->next;

first->next=second;
second->next=firstNext;

first=firstNext;
second=secondNext;

}

    }
};
