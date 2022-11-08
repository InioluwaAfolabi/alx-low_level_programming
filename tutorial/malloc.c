#include <stdio.h>
#include <stdlib.h>
/**
 * main - malloc example
 * Return: 0
 */
int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 15);
	str[0] = 'Y';
	str[1] = 'o';
	str[2] = 'u';
	str[3] = ' ';
	str[4] = 'p';
	str[5] = 'i';
	str[6] = 'e';
	str[7] = 'c';
	str[8] = 'e';
	str[9] = ' ';
	str[10] = 'o';
	str[11] = 'f';
	str[12] = ' ';
	str[13] = 's';
	str[14] = '\0';
	printf("%s\n", str);
	return (0);
}
