#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
