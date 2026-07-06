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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prevGroupTail = dummy;

            while (true) {
            ListNode* groupStart = prevGroupTail->next;
            ListNode* kth = prevGroupTail;
            ListNode* nextGroupHead=nullptr;

                // find k

            for (int i = 0; i < k; i++) {
                if (kth->next == nullptr) {
                    return dummy->next;
                }
                kth = kth->next;
            }

            nextGroupHead = kth->next;

            // logic to reverse:

            ListNode* curr = groupStart;
            ListNode* prev = nullptr;
            ListNode* tempNext = nullptr;

            while (curr != nextGroupHead) {
                tempNext = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tempNext;
            }
            // reverse logic end

            prevGroupTail->next = kth;
            groupStart->next = nextGroupHead;

            prevGroupTail = groupStart;
            groupStart = nextGroupHead;
        }
    }
};
