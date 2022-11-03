#include <stdio.h>

/**
 * main - print address
 * Return: Always 0
 */

int main(void)
{
	char a[] = "ABCDEF";
	int num = 40;
	int *n;
	char *c;

	n = &num;
	c = &a;
	printf("Value of num is %d\n", num);
	printf("Value of n is %d\n", *n);
	printf("Value of a is %s\n", a);
	printf("Value of c is %s\n", c);
	printf("Value stored in n is %p\n", n);
	printf("Vlaue stored in c is %p\n", c);
	printf("Address of char a: %p\n", &a);
	printf("Address of int num: %p\n", &num);

	return (0);
}
