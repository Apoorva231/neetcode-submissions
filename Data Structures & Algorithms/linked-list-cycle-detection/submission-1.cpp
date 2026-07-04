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
    bool hasCycle(ListNode* head) {

        if(head== nullptr || head->next==nullptr || head->next->next==nullptr) return false;

        ListNode* sptr=head;
        ListNode* fptr=head->next->next;
        

        while (fptr->next!=nullptr && fptr->next->next!=nullptr){
            if(sptr==fptr){
                return true;
            }

            sptr=sptr->next;
            fptr=fptr->next->next;
        }

        return false;
    }
};
