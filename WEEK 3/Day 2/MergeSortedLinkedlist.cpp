/*
Problem: Merge Two Sorted Lists

Given the heads of two sorted linked lists, merge them into a single sorted linked list and return its head.

Approach: Compare the nodes of both lists and link the smaller node to the merged list until all nodes are processed.

Time Complexity: O(n + m)
Space Complexity: O(1)
*/


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        if (list1)
            curr->next = list1;
        else
            curr->next = list2;

        return dummy.next;
    }
};