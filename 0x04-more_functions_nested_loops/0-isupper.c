#include "main.h"
/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char i;
	int isupper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
