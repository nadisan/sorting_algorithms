#include "sort.h"


/**
 * insertion_sort_list - insertion sorts a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *a, *b;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				a = j->prev;
				b = j;
				if (a->prev)
					a->prev->next = b;
				if (j->next)
					j->next->prev = a;
				a->next = b->next;
				b->prev = a->prev;
				a->prev = b;
				b->next = a;
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
			}
		}
}
