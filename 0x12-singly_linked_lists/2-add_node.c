#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
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
	newN->next = *head;
	*head = newN;

	return (newN);
}
