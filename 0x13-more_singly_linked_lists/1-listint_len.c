#include "lists.h"

/**
 * Count the number of elements in a linked list.
 * @param head A pointer to the head of the linked list.
 * @return The number of elements in the linked list.
 */
size_t count_list_elements(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

