#include "main.h"
/**
 * print_most_numbers - print numers except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('i');
			break;
		}
	}

	_putchar('\n');
}