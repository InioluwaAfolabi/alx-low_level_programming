#include <stdio.h>

/**
 * factorial - solve for i
 * @i: integer to be solved
 * Return: factorial
 */

unsigned long int factorial(unsigned int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else
	{
		return (i * factorial(i - 1));
	}
}

/**
 * main - get result for factorial
 * Return: Always 0
 */
int main(void)
{
	int i = 6;

	printf("Factorial of %d is %d\n", i, factorial(i));
	return (0);
}
