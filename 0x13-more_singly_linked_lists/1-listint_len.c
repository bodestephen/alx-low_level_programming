#include "lists.h"

/**
 * Return the number of elements in a list
 *
 * @param h the head of the list
 * @return the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}

