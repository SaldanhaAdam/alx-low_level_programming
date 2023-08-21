#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: A function that swaps the values of two integers
 *
 * @a: input parameter
 * @b: input parameter
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int letter;

	letter = *a;
	*a = *b;
	*b = letter;
}
