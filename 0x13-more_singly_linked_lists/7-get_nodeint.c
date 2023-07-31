#include "lists.h"

/**
 * get_nodeint_at_index -retrieves the node ataspecified index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to be retrieved
 *
 * Return: a pointer to the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;
	listint_t *currentNode = head;

	while (currentNode && currentIndex < index)
	{
		currentNode = currentNode->next;
		currentIndex++;
	}

	return (currentNode ? currentNode : NULL);
}

