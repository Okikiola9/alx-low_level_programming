#include "main.h"
#include <stdlib.h>
/**
 * _realloc - removes memory block.
 * @ptr: pointer to the old memory given
 * @old_size: old size given
 * @new_size: new size.
 *
 * Return: pointer to old memory
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
