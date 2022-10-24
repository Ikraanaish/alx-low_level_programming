#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = *s;
	int mid;
	char temp;
	int i;

	for (len = 0; s[len] != '\0'; len++)
	{
		i = 0;
		mid = len / 2;
	}
	while (mid--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
