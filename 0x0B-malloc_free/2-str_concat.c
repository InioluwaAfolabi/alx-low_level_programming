#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatonation of two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int a, b, c1, c2, d;

	c1 = 0;
	c2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			c1++;
	}
	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			c2++;
	}

	d = c1 + c2;
	conc = malloc((d + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (a = 0; a < c1; a++)
		conc[a] = s1[a];
	for (b = 0; b < c2; b++, a++)
		conc[a] = s2[b];
	conc[d] = '\0';
	return (conc);
}
