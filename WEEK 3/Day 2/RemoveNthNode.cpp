/*
Problem: Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end and return the modified list.

Approach: Use two pointers with a fixed gap of n nodes to locate and remove the target node in a single traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        if (size == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        int pos = size - n;
        ListNode* prev = head;

        for (int i = 1; i < pos; i++) {
            prev = prev->next;
        }

        ListNode* del = prev->next;
        prev->next = del->next;
        delete del;

        return head;
    }
};