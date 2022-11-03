#include <stdio.h>

/**
 * main - increment these
 * Return: r
 */
int main(void)
{
	int r;
	int i = 0;

	r = i++;
	printf("%d\n", r);

	r = ++i;
	printf("%d\n", r);

	return (0);
}
