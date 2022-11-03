#include <stdio.h>

/**
 * main - dereference
 * Return: void
 */

int main(void)
{
	int *n;
	int num = 5;

	n = &num;
	printf("Value of num before deref is %d\n", num);

	*n = 12;
	printf("Value of num after deref is %d\n", num);

	return (0);
}
