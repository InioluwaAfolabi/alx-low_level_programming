#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all argument
 * @argv: argument vector
 * @argc: argement count
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
