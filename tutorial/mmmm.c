#include <stdio.h>

/**
 * print_school - testing
 * Return: 0
 */

void print_school(void)
{
	char str[] = "Holberton";

	printf("%s\n", str);

	str[0] = 's';
	printf("%s\n", str);
}

/**
 * main - new concept
 * Return: 0
 */
int main(void)
{
	print_school();
	return (0);
}
