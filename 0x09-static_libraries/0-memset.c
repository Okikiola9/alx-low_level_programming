#include "main.h"
/**
 * _memset - fill with datae
 * @s: start
 * @b: the wateed resukt
 * @n: number of bytes awating transformation
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
