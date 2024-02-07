#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: the basic head of the list
 *
 * Return: NULL if Error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
