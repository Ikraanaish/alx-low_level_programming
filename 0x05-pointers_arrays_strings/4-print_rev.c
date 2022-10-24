#include "main.h"
/**
 * print_rev - function that prints string in reverse
 *
 * @s: a string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
	print_rev(s + 1);
	_putchar(*s);
	}
	_putchar('\n')
}
