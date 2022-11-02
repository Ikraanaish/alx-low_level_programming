#include "main.h"
/**
 * _sqrt_recursion - to print the sqrt
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt_recursion
 * @n: int
 * @m: int
 * Return: sqrt
 */
int _sqrt(int n, int m)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((m * m) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, m + 1));
	}
}
