#include "main.h"
/**
 * more_numbers - a ffunction that prints from 0 to 14
 * 10 times
 * followed by a new line
 *
 * Return: Always 0(Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
