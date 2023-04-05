#include "lists.h"

/**
 * Counts the number of elements in the given list.
 *
 * @param h A pointer to the start of the list.
 * @return The number of elements in the list.
 */
size_t listint_len(const listint_t *h) {
    size_t count = 0;
    while (h) {
        count++;
        h = h->next;
    }
    return count;
}

