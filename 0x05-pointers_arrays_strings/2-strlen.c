#include "main.h"
/**
 * _strlen - returns length of string
 * @s: pointer to a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	len = *s;
	if (s[len] != '\0')
	{
		len++;
	}

	return (0);
}
