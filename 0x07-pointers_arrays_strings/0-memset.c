#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: starting address
 * @b: the value
 * @n: no of bytes changed
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
