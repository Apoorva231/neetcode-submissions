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
        ListNode* dummy = new ListNode(-1); 

ListNode* tail=dummy; 

ListNode* ptr1= l1; 

ListNode* ptr2=l2; 

int carry=0; 
int current_digit=0;


while (ptr1!=nullptr || ptr2!=nullptr || carry!=0){ 
int sum=carry;

if(ptr1){
sum+=ptr1->val;
}

if(ptr2){
sum+=ptr2->val;
}

current_digit=sum%10; 
carry=sum/10; 

ListNode* sum_node= new ListNode(current_digit); 
tail->next=sum_node; 
tail=sum_node; 

ptr1=ptr1?ptr1->next:nullptr;
ptr2=ptr2?ptr2->next:nullptr;
}

return dummy->next;
    }
};
