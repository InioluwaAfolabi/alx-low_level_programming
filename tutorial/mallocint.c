#include <stdio.h>
#include <stdlib.h>
/**
 * main - malloc example
 * Return: 0
 */
int main(void)
{
	unsigned int *num;

	num = malloc(sizeof(int) * 3);
	num[0] = 45;
	num[1] = -1024;
	num[2] = 98;
	printf("%d, %d, %d\n", num[0], num[1], num[2]);
	return (0);
}
