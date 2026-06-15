/*
Problem: Linked List Cycle

Given the head of a linked list, determine whether the linked list contains a cycle.

Approach: Use Floyd's Cycle Detection Algorithm (Tortoise and Hare) with two pointers moving at different speeds to detect a cycle.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* fast =head;
        ListNode* slow= head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow->val == fast->val) {
                return true;
            }
        }
        return false;
    }
};