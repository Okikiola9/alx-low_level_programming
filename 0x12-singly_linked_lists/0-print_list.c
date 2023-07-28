#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints every element in the print string
 * @h: pointer to the list of the project
 *
 * Return: the number of printed nodes in project
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
