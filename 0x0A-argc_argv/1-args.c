#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of number
 * @argc: arguement count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
