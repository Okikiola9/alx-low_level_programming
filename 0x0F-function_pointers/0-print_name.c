#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using a pointer to functio code
 * @name: string to add name
 * @f: pointer fxn
 * Return:
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
