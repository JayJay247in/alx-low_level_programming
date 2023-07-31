#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be assigned to the data (n) of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    /* Step 1: Create a new node and allocate memory for it */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Step 2: Set the data (n) of the new node */
    new_node->n = n;

    /* Step 3: Insert at the beginning of the list if idx is 0 */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Step 4: Find the node at index (idx - 1) */
    current = *head;
    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node);
            return (NULL); // Index is out of bounds
        }
        current = current->next;
    }

    /* Step 5: Insert the new node after the found node */
    new_node->next = current->next;
    current->next = new_node;

    /* Step 6: Return the address of the new node */
    return (new_node);
}
