#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

/* Get the size of a linked list. */
int size_of_linked_list(struct ListNode *head)
{
        if (head == NULL)
                return 0;
        int count = 0;
        struct ListNode *curr = head;
        while (curr) {
                curr = curr->next;
                count++;
        }
        return count;
}

/* Print linked list in terminal */
void print_linked_list(struct ListNode *head)
{
        while (head) {
                printf("%d\n", head->val);
                head = head->next;
        }
        return;
}

/* Compare two linked lists. */
int compare_linked_lists(struct ListNode *l1, struct ListNode *l2)
{
        struct ListNode* p = l1;
        struct ListNode* q = l2;
        while (p != NULL && q != NULL && p->val == q->val) {
                p = p->next;
                q = q->next;
        }
        return p == q ? 1 : 0;
}

/* Transfer an array to a linked list. */
struct ListNode *array_to_linked_list(int *array, int size)
{
        if (array == NULL)
                return NULL;

        struct ListNode *head = NULL, *curr = NULL, *tmp = NULL;

        for (int i = 0; i < size; i++) {
                tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
                tmp->val = array[i];
                tmp->next = NULL;
                if (head == NULL) {
                        head = tmp;
                        curr = head;
                } else {
                        curr->next = tmp;
                        curr = curr->next;
                }
        }

        return head;
}
