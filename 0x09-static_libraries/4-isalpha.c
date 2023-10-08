#include "main.h"

/**
 * _isalpha - checkup for alpha
 * @c: check c character
 * Return: 1 if c is alph, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
