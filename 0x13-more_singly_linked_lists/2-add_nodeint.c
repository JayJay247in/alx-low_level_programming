#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Step 1: Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Step 2: Assign the value to the new node */
    new_node->n = n;

    /* Step 3: Make the new node's next pointer point to the current head */
    new_node->next = *head;

    /* Step 4: Update the head of the list to point to the new node */
    *head = new_node;

    return (new_node);
}
