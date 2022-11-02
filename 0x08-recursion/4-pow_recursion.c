#include "main.h"
/**
 * _pow_recursion - func for x power y
 * @x: an int
 * @y: an int
 * Return: answer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
