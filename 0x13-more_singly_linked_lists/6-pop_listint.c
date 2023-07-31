#include "lists.h"

/**
 * pop_listint - removes the first node of a linked list
 * @head: pointer to the pointer to the first node in the linked list
 *
 * Return: the data stored in the removed node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

