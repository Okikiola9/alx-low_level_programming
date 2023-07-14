#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc on bytes b
 * @b: number of bytes b
 *
 * Return: allocated pointer to memory.
 * if malloc fails, valu equals 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
