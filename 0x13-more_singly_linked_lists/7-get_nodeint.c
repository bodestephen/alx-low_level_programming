/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of the linked list, or NULL if the node does not exist.
 * 
 * This code was written by Bode Stephen
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current == NULL ? NULL : current);
}

