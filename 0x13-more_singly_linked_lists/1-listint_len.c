#include "lists.h"

/**
 * count_list_elements - Counts the number of elements in a linked list.
 * @head: Pointer to the first node of the linked list.
 *
 * Return: Number of nodes in the linked list.
 */
size_t count_list_elements(const listint_t *head)
{
        size_t num = 0;

        while (head)
        {
                num++;
                head = head->next;
        }

        return (num);
}

