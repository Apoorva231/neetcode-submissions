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

ListNode* reverse(ListNode* head){
    ListNode* prev=nullptr;
    ListNode* curr= head;
    ListNode* nex=nullptr;
    
    while(curr!=nullptr){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* dummy=new ListNode(-1);
    dummy->next=head;
    ListNode* startReverse=nullptr;
    ListNode* endReverse=nullptr;
    ListNode* p1=nullptr;
    ListNode* p2=nullptr;
    ListNode* curr=dummy;;
    
   
    
    for(int i=1;i<left;i++){
        curr=curr->next;
    }
    p1=curr;
    startReverse=curr->next;
    curr=head;
    
    for(int i=1;i<right;i++){
        curr=curr->next;
    }
    endReverse=curr;
    p2=curr->next;
    
    p1->next=nullptr;
    endReverse->next=nullptr;
    
    ListNode* reversedHead= reverse(startReverse);
    
    p1->next=endReverse;
    startReverse->next=p2;
    
    return dummy->next;

        
    }
};