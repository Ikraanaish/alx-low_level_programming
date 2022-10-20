#include "main.h"
/**
 * _isdigit - A function that checks for digit.
 * @c: An input character
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	int i;
	int isdigit = 0;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
