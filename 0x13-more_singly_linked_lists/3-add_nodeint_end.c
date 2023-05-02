#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end
 * of a listint_t list
 * @head: head of a list
 * @n: n element
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *newN;

	newN = malloc(sizeof(listint_t));

	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = newN;
	return (newN);
}
