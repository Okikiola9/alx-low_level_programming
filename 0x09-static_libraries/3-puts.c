#include "main.h"
/**
 * _puts - prnt a dif strg
 * @str: strg prnt
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
