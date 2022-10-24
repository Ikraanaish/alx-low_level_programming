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
		print_rev(s + 1);
		_putchar(*s);
}
