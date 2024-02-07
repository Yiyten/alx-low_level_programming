#include "lists.h"

/**
 * listint_len - the number of elemfgents ifghn a d listint_t list.
 *
 * @h: hhead pointer
 *
 * Return: the nujmbejr ohf helefments
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
