#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "reverse_linked_list.h"

#define MAX_ARRAY_SIZE 5000

/* TEST CASE 1
 * INPUT: NULL
 * EXPECT OUTPUT: NULL
 */
int test_reverse_linked_list1() {
        printf("[TEST CASE 1]: NULL\n");

        if (reverse_list_iter(NULL) || reverse_list_recur(NULL))
                return 1;
        else {
                return 0;
        }
}

/* TEST CASE 2
 * INPUT: 1
 * EXPECT OUTPUT: 1
 */
int test_reverse_linked_list2() {
        printf("[TEST CASE 2]: 1\n");

        struct ListNode node = {
                .val = 1,
                .next = NULL
        };
        struct ListNode *head = &node, *tmp = NULL;

        tmp = reverse_list_iter(head);
        if (!compare_linked_lists(tmp, head))
                return 1;

        tmp = reverse_list_recur(head);
        if (!compare_linked_lists(tmp, head))
                return 1;

        return 0;
}

/* TEST CASE 3
 * INPUT: 1->2->3->4->5
 * EXPECT OUTPUT: 5->4->3->2->1 
 */
int test_reverse_linked_list3() {
        printf("[TEST CASE 3]: 1->2->3->4->5\n");

        int array[] = { 1, 2, 3, 4, 5 };
        int array_rev[] = { 5, 4, 3, 2, 1 };
        struct ListNode* head1 = array_to_linked_list(array, 5);
        struct ListNode* head2 = array_to_linked_list(array, 5);
        struct ListNode* head_rev = array_to_linked_list(array_rev, 5);
        struct ListNode* tmp = NULL;

        tmp = reverse_list_iter(head1);
        if (!compare_linked_lists(tmp, head_rev))
                return 1;

        tmp = reverse_list_recur(head2);
        if (!compare_linked_lists(tmp, head_rev))
                return 1;

        return 0;
}

/* TEST CASE 4
 * INPUT: 1->2->...->4999->5000
 * EXPECT OUTPUT: 5000->4999->...->2->1 
 */
int test_reverse_linked_list4() {
        printf("[TEST CASE 4]: 1->2->...->4999->5000\n");

        struct ListNode* tmp = NULL;
        int array[MAX_ARRAY_SIZE] = {0};
        int array_rev[MAX_ARRAY_SIZE] = {0};
        
        for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
                array[i] = i + 1;
                array_rev[i] = 5000 - i;
        }
        struct ListNode* head1 = array_to_linked_list(array, MAX_ARRAY_SIZE);
        struct ListNode* head2 = array_to_linked_list(array, MAX_ARRAY_SIZE);
        struct ListNode* head_rev = array_to_linked_list(array_rev, MAX_ARRAY_SIZE);

        tmp = reverse_list_iter(head1);
        if (!compare_linked_lists(tmp, head_rev))
                return 1;

        tmp = reverse_list_recur(head2);
        if (!compare_linked_lists(tmp, head_rev))
                return 1;

        return 0;
}

/* RUN TEST CASES */
int main() {
        if (test_reverse_linked_list1()) {
                printf("Run test case 1 failed!\n");
                return 1;
        } else if (test_reverse_linked_list2()) {
                printf("Run test case 2 failed!\n");
                return 1;
        } else if (test_reverse_linked_list3()) {
                printf("Run test case 3 failed!\n");
                return 1;
        } else if (test_reverse_linked_list4()) {
                printf("Run test case 4 failed!\n");
                return 1;
        } else {
                printf("Run all test cases success!\n");
                return 0;
        }
}