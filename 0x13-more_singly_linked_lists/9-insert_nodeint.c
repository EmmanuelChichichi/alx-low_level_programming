#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list
 * @idx: index of the list where the new node is added
 * @n: integer element
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *curr = *head;
	listint_t *newN;

	if (curr == NULL)
		return (NULL);

	if (idx != 0)
	{
		while (curr != NULL && i < idx - 1)
		{
			curr = curr->next;
			i++;
		}
	}
	newN = (listint_t *)malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
	}
	else
	{
		newN->next = curr->next;
		curr->next = newN;
	}
	return (newN);
}
