#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    /* Check if the list is empty or index is out of bounds */
    if (*head == NULL)
        return (-1);

    /* Step 2: Delete the first node if index is 0 */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    /* Step 3: Find the previous node of the node to be deleted */
    current = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (current == NULL || current->next == NULL)
            return (-1); // Index is out of bounds
        current = current->next;
    }

    /* Step 4: Delete the node at the given index */
    temp = current->next;
    current->next = temp->next;
    free(temp);
    return (1);
}
