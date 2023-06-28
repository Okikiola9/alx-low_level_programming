#include "main.h"

/**
 * char *_strcpy - copies a strng
 * @dest: fuction copied at
 * @src: fuction to paste copy
 * Return: the strng
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
