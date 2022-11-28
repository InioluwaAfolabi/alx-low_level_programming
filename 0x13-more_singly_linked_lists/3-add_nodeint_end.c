#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add node to the end of list
 * @head: head of list
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	if (head == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next != NULL)
	{
		b = b->next;
	}
	b->next = a;
	return (a);
}
