#include "main.h"
/**
 * _strchr - function to locate string
 * @s: pointer
 * @c: charater
 * Return: *s in c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
