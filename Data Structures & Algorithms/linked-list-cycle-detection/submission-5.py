# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:

        slowPointer= head
        fastPointer= head

        if head==None:
            return False

        while(fastPointer.next!=None and fastPointer.next.next!=None):
            fastPointer=fastPointer.next.next
            slowPointer= slowPointer.next

            if fastPointer==slowPointer:
                return True
            
        
        return False
        