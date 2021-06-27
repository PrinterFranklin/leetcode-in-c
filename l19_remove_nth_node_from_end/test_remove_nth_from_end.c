#include <stddef.h>
#include <stdio.h>
#include "linked_list.h"
#include "remove_nth_from_end.h"

/* TEST CASE 1
 * INPUT: 1, 1
 * EXPECT OUTPUT: NULL
 */
int test_remove_nth_from_end1() {
        printf("[TEST CASE 1]: 1, 1\n");

        struct ListNode node = {
                .val = 1,
                .next = NULL
        };
        struct ListNode *head = &node;

        if (remove_nth_from_end(head, 1))
                return 1;
        return 0;
}

/* TEST CASE 2
 * INPUT: 1->2, 1
 * EXPECT OUTPUT: 1
 */
int test_remove_nth_from_end2() {
        printf("[TEST CASE 2]: 1->2, 1\n");

        int array[] = { 1, 2 };
        struct ListNode* input = array_to_linked_list(array, 2);
        struct ListNode node = {
                .val = 1,
                .next = NULL
        };
        struct ListNode* output = &node;

        struct ListNode* tmp = remove_nth_from_end(input, 1);
        if (!compare_linked_lists(tmp, output))
                return 1;
        return 0;
}

/* TEST CASE 3
 * INPUT: 1->2->3->4->5, 2
 * EXPECT OUTPUT: 1->2->3->5
 */
int test_remove_nth_from_end3() {
        printf("[TEST CASE 3]: 1->2->3->4->5, 2\n");

        int array1[] = { 1, 2, 3, 4, 5 };
        int array2[] = { 1, 2, 3, 5 };

        struct ListNode* input = array_to_linked_list(array1, 5);
        struct ListNode* output = array_to_linked_list(array2, 4);

        struct ListNode* tmp = remove_nth_from_end(input, 2);
        if (!compare_linked_lists(tmp, output))
                return 1;
        return 0;
}

/* TEST CASE 4
 * INPUT: 1->4->2->4->5->6, 6
 * EXPECT OUTPUT: 4->2->4->5->6
 */
int test_remove_nth_from_end4() {
        printf("[TEST CASE 4]: 1->4->2->4->5->6, 6\n");

        int array1[] = { 1, 4, 2, 4, 5, 6 };
        int array2[] = { 4, 2, 4, 5, 6 };

        struct ListNode* input = array_to_linked_list(array1, 6);
        struct ListNode* output = array_to_linked_list(array2, 5);

        struct ListNode* tmp = remove_nth_from_end(input, 6);
        if (!compare_linked_lists(tmp, output))
                return 1;
        return 0;
}

int main()
{
        if (test_remove_nth_from_end1()) {
                printf("Run test case 1 failed!\n");
                return 1;
        } else if (test_remove_nth_from_end2()) {
                printf("Run test case 2 failed!\n");
                return 1;
        } else if (test_remove_nth_from_end3()) {
                printf("Run test case 3 failed!\n");
                return 1;
        } else if (test_remove_nth_from_end4()) {
                printf("Run test case 4 failed!\n");
                return 1;
        } else {
                printf("Run all test cases success!\n");
                return 0;
        }
}