#include "main.h"

/**
 * _strlen - determine the lenght
 * @s: integer to determine its lenght
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
