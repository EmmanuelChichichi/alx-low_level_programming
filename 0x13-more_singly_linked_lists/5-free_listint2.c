#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((t = curr) != NULL)
		{
			curr = curr->next;
			free(t);
		}
		*head = NULL;
	}
}
