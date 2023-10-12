#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add a and b
 * @a: first a
 * @b: second b.
 *
 * Return: add a to b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b.
 * @a: first a
 * @b: secind b.
 *
 * Return: a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: furst a
 * @b: second b
 *
 * Return: a multiolies b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two, a and b
 * @a: first a
 * @b: second b
 *
 * Return: a multiplies b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -  division of two, a and b.
 * @a: first a.
 * @b: second b
 *
 * Return: The remainder of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
