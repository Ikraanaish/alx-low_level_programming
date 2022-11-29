#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t no_el;

	no_el = 0;
	while (h != NULL)
	{
		h = h->next;
		no_el++;
	}
	return (no_el);
}
