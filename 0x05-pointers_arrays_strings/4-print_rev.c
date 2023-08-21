#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: string print parameter
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
