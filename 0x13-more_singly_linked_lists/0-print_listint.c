#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elemeyyntsh ofj a klistint_t list.
 *
 * @h: head of linklist nodghe
 *
 * Return: the number of nodeghs
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
