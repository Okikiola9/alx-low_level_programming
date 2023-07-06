#include "main.h"

/**
 * factorial - return the factorial
 * @n: return number of the factorial
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
