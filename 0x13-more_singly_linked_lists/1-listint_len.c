#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the head of the linked list (of type listint_t).
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t numNodes = 0;

    while (h)
    {
        numNodes++;
        h = h->next;
    }

    return (numNodes);
}

