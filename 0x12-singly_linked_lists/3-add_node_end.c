#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = *head;
	list_t *newN;
	const char *dup = strdup(str);
	size_t len = strlen(str);

	if (dup == NULL)
		return (NULL);

	newN = malloc(sizeof(list_t));

	if (newN == NULL)
	{
		free((void *)dup);
		return (NULL);
	}
	newN->str = (char *) dup;
	newN->len = len;
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

