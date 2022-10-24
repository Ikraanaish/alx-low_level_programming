#include "main.h"
/**
 * swap_int -a function that swaps two integers
 * @a: a pointer
 * @b: another pointer
 *
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	int i = 98;

	*a = i;
	*a = *b;
	*b = i;
}
