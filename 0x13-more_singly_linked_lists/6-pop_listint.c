#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: the pointer to be terminated
 * Return: returns the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *t = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = t->n;
	*head = (*head)->next;
	free(t);

	return (data);
}
