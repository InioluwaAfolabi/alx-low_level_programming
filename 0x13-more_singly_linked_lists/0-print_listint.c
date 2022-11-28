#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print the elements of listint_t
 * @h: head
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
