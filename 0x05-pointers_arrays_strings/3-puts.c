#include "main.h"
/**
 * _puts - inserts a sting and a neew line
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
