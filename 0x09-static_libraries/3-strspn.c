#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: Length of occurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *v = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		if (!(*--accept))
			break;
		accept = v;
	}
	return (i);
}
