#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory fir strct dog
 * @d: d
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
