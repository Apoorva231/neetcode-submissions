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


        ListNode* sptr=head;
        ListNode* fptr=head;
        

        while (fptr!=nullptr && fptr->next!=nullptr){

            sptr=sptr->next;
            fptr=fptr->next->next;

            if(sptr==fptr){
                return true;
            }
            
        }

        return false;
    }
};
