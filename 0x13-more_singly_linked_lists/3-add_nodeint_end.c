#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    /* Step 1: Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Step 2: Assign the value to the new node */
    new_node->n = n;

    /* Step 3: Make the new node's next pointer point to NULL */
    new_node->next = NULL;

    /* Step 4: If the list is empty, update the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Step 5: Traverse the list to find the last node */
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        /* Make the last node's next pointer point to the new node */
        temp->next = new_node;
    }

    return (new_node);
}
