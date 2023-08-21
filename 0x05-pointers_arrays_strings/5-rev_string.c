#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: input parameter
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char letter;

	/*find string lenght without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to half the sting*/
	for (i = 0; i < l / 2; i++)
	{
		letter = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = letter;
	}
}
