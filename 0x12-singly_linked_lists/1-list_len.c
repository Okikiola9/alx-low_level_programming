#include <stdlib.h>
#include "lists.h"

/**
 * list_len - elements in a linked list
 * @h: pointer
 *
 * Return: number h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
