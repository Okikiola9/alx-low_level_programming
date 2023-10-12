#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a name for pointer to functn
 * @name: name strng
 * @f: function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
