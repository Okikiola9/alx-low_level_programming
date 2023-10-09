#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - give out memory
 * @b: b
 *
 * Return: a strn
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
