#include <stdio.h>
#include "main.h"

/**
 * main - prnts name of prg
 * @argc: number argc
 * @argv: argv arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
