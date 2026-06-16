/*
Problem: Palindrome Linked List

Given the head of a linked list, determine whether the linked list is a palindrome.

Approach: Find the middle of the list, reverse the second half, and compare both halves node by node.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = slow;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};