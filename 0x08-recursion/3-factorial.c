#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	int a;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
