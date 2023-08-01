#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list.
 * @head: Pointer to the head node of the linked list.
 * Return: Pointer to the new head node of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}

