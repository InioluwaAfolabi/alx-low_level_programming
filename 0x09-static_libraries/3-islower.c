#include "main.h"
/**
 * _islower - check if the character is lower
 * @c: is the code we have to look into
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
