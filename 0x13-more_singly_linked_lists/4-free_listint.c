#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: Pointer to the first node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}

