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
    ListNode* reverseList(ListNode* head) {
        ListNode* current= head;
        ListNode* prev= nullptr;;
        ListNode* n=nullptr;

        if(head==nullptr){
            return nullptr;
        }
        if(head->next==nullptr){
            return head;
        }

        while(current!=nullptr){
            n=current->next;
            current->next=prev;
            prev=current;
            current=n;

        }

        return prev;
    }
};
