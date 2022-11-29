#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function to delete head node of list
 * @head: head of list
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *d;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	d = *head;
	*head = d->next;
	n = d->n;
	free(d);
	return (n);
}
