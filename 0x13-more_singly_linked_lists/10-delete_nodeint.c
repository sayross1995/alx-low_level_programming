#include "lists.h"

/**
 * remove_nodeint_at_index - Deletes node at specified index in linked list.
 * @head: Pointer to the first element of the list.
 * @index: Index of the node to remove.
 *
 * Return: 1 (Success), or -1 (Failure).
 */
int remove_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL || head == NULL)
		return (-1);

	listint_t *temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (unsigned int i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	listint_t *current = temp->next;
temp->next = current->next;
	free(current);

	return (1);
}


