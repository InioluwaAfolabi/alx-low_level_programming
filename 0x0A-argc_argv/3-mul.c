#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiples of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 4)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
