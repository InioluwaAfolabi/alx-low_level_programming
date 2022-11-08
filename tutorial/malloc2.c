#include <stdio.h>
#include <stdlib.h>

/**
 * print_int_array - print array of integers
 * @a: int 1
 * @size: int 2
 * Return: 0
 */

void print_int_array(int *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		 printf("%d\n", a[i]);
		 i++;
	}
}
/**
 * main - arg
 * @ac: int 3
 * @av: point 2
 */
int main(int ac, char **av)
{
	int *a;
	int asize;
	int i;

	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("Usage: %s number [NUMBER]\n", av[0]);
		return (1);
	}
	asize = ac -1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	return (0);
}
