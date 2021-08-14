#include <stddef.h>
#include "linked_list.h"

/* Iteration */
struct ListNode* reverse_list_iter(struct ListNode* head) {
        struct ListNode* prev = NULL;
        struct ListNode* curr = head;
        while (curr) {
                struct ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
        }
        return prev;
}

/* Recursive */
struct ListNode* reverse_list_recur(struct ListNode* head) {
        if (head == NULL || head->next == NULL)
                return head;
        struct ListNode* newHead = reverse_list_recur(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
}