#include "main.h"
/**
 *print_line - a function that draws a striaght line in the terminal
 *followed by a new line
 * @n: An input integer
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
