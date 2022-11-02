#include "main.h"
/**
 * factorial - function to find the ! of an int
 * @n: an int
 * Return: -1(if n==0)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
