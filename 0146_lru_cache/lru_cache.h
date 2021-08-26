#include "linked_list.h"

typedef struct {
	int capacity;
	int count;
	struct list_head dhead;
	struct list_head hheads[];
} LRUCache;

typedef struct {
	int key;
	int value;
	struct list_head hlink;
	struct list_head dlink;
} LRUNode;
