struct ListNode {
        int val;
        struct ListNode *next;
};

/* Get the size of a linked list. */
int size_of_linked_list(struct ListNode* head);
/* Print linked list in terminal */
void print_linked_list(struct ListNode *head);
/* Compare two linked lists. */
int compare_linked_lists(struct ListNode* l1, struct ListNode* l2);

/* Transder an array to a linked list. */
struct ListNode* array_to_linked_list(int* array, int size);