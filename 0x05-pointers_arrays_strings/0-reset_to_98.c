#include "main.h"
/**
 * reset_to_98 - a function that takes a pointer.
 *@n: pointer to an int
 *
 * Return: always 0.
 */
void reset_to_98(int *n)
{
	int i = 0;
	int *n = &i;

	*n = 98;

	{
		_putchar(*n);
	}
}
