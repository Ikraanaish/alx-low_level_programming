#include "main.h"
/**
 * _puts_recursion -function to print a string
 * @s: a string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		_putchar(*s);
	}
	_putchar('\n');
}
