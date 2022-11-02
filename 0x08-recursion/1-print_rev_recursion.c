#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: a string to char
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
