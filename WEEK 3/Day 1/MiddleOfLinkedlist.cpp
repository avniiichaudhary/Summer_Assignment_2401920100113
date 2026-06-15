/*
Problem: Middle of the Linked List

Given the head of a linked list, return the middle node of the linked list. If there are two middle nodes, return the second one.

Approach: Use two pointers, where one moves one step and the other moves two steps, to find the middle efficiently.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};