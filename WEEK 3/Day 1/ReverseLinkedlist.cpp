/*
Problem: Reverse Linked List

Given the head of a linked list, reverse the linked list and return the new head.

Approach: Traverse the list and reverse the links between nodes using three pointers: previous, current, and next.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp != NULL) {
            ListNode* front = front->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};