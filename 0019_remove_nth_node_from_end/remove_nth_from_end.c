#include <stddef.h>
#include <stdlib.h>
#include "linked_list.h"

struct ListNode* remove_nth_from_end(struct ListNode* head, int n) {
        if (head == NULL || head->next == NULL)
                return NULL;

        struct ListNode* fast = head;
        struct ListNode* slow = head;

        for (int i = 0; i < n; i++) {
                fast = fast->next;
                if (fast == NULL)
                        return head->next;
        }
        while (fast->next) {
                fast = fast->next;
                slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
}

// struct ListNode* remove_nth_from_end(struct ListNode* head, int n) {
//         /* Add a dummy node to avoid special cases of head. */
//         struct ListNode* dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
//         dummy->val = 0, dummy->next = head;

//         struct ListNode* fast = head;
//         struct ListNode* slow = dummy;

//         for (int i = 0; i < n; i++) {
//                 fast = fast->next;
//         }
//         while (fast) {
//                 fast = fast->next;
//                 slow = slow->next;
//         }
//         slow->next = slow->next->next;
//         struct ListNode* ans = dummy->next;
//         free(dummy);
//         return ans;
// }
