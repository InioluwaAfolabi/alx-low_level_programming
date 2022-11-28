#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - fuction to add node to the beginning of the list
 * @head: head
 * @n: add the integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	if (head == NULL)
	{
		return (NULL);
	}
	b = malloc(sizeof(listint_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->n = n;
	b->next = *head;
	*head = b;
	return (b);
}
