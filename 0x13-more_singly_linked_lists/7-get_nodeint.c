#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of a list
 * @index: index of the node
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (i < index && curr != NULL)
	{
		curr = curr->next;
		i++;
	}

	return (curr);
}
