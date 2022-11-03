#include <stdio.h>

/**
 * main - dereference 2
 * Return:Always 0
 */

void change(int *a)
{
	*a = 20;
}

int main(void)
{
	int *n;
	int num = 10;

	n = &num;

	printf("Former value of num is %d\n", num);
	
	change(n);
	printf("New value of num is %d\n", num);

	return (0);
}
