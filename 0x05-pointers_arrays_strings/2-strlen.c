#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: function that returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++)
		++lenght;
	return (lenght);
}
