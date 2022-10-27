#include "main.h"

/**
 * _strcat - concat two string
 * @src: string one
 * @dest: string two
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *m = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (m);
}
