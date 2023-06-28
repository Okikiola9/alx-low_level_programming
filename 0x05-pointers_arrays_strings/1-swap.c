#include "main.h"
/**
 * swap_int - exchanges the values of the two integers
 * @a: integer that will be swapped
 * @b: integer that wll be swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
