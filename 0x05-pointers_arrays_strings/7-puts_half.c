#include "main.h"
/**
 * puts_half - prints half a string
 * @str: a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (i /= 2)
		{
			i++;
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
