#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: either 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;
	char *flag;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		b = strtol(argv[a], &flag, 10);
		if (*flag)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			add += b;
		}
	}
	printf("%d\n", add);

	return (0);
}
