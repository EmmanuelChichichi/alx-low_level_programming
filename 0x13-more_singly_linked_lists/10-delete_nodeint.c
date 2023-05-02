#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = *head;
	listint_t *next;

	if (index != 0)
	{
		while (i < index - 1 && p != NULL)
		{
			p = p->next;
			i++;
		}
	}

	if (p == NULL || (p->next == NULL && index != 0))
	{
		return (-1);
	}

	next = p->next;

	if (index != 0)
	{
		p->next = next->next;
		free(next);
	}
	else
	{
		free(p);
		*head = next;
	}

	return (1);
}
