#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    /* Step 1: Check if the list is empty */
    if (*head == NULL)
        return (0);

    /* Step 2: Store the data (n) of the head node */
    data = (*head)->n;

    /* Step 3: Update the head to the next node */
    temp = *head;
    *head = (*head)->next;

    /* Step 4: Free the memory of the original head node */
    free(temp);

    /* Step 5: Return the data (n) of the original head node */
    return (data);
}
