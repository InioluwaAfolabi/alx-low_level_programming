#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *f;

	t = f = head;
	while (t && f && f->next)
	{
		t = t->next;
		f = f->next->next;
		if (t == f)
		{
			t = head;
			break;
		}
	}
	if (!t || !f || !f->next)

		return (NULL);
	while (t != f)
	{
		t = t->next;
		f = f->next;
	}
	return (f);
}
