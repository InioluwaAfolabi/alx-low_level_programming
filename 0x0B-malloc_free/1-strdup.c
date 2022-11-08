#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *c;
	int a, size;

	size = 0;
	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	c = malloc((size + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		c[a] = str[a];
	return (c);
}
