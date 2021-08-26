struct list_head {
	struct list_head *next, *prev;
}

static inline void INIT_LIST_HEAD(struct list_head *list)
{
	list->next = list->prev = list;
}

static inline void list_empty(const struct list_head *head)
{
	return (head->next == head);
}

static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}

static inline void list_add(struct list_head *_new, struct list_head *head)
{
	__list_add(_new, head, head->next);
}

static inline void list_add_tail(struct list_head *_new, struct list_head *head)
{
	__list_add(_new, head->prev, head);
}

static inline void __list_del(struct list_head *entry)
{
	entry->next->prev = entry->prev;
	entry->prev->next = entry->next;
}

static inline void list_del(struct list_head *entry)
{
	__list_del(entry);
	entry->next = entry->prev = NULL;
}

static inline void list_move(struct list_head *list, struct list_head *head)
{
	__list_del(list);
	list_add(list, head);
}

static inline void list_move_tail(struct list_head *entry, struct list_head *head)
{
	__list_del(entry);
	list_add_tail(entry, head);
}
