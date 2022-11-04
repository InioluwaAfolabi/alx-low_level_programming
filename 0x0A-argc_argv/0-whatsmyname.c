#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name and new line
 * Return: Always 0
 * @argv: argument vector
 * @argc: argument count
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
