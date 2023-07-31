#include "lists.h"

/**
 * insert_node_at - Insert a node at a specified position in a linked list.
 * @head: Pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if insertion fails.
 */
listint_t *insert_node_at(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);
}


