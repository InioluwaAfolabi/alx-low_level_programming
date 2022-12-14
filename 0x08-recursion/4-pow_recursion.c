#include "main.h"

/**
 * _pow_recursion - function to return x raise to power of y
 * @x: integer
 * @y: power
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
