#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of char: %u byte(s)\n", sizeof(char));
	printf("Size of int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %u byte(s)\n", sizeof(long int));
	printf("Size of long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of float: %u byte(s)\n", sizeof(float));
	return (0);
}
