#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t node_count = 0;

    tortoise = head;
    hare = head;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            node_count++;

            head = head->next;

            while (head != tortoise)
            {
                printf("[%p] %d\n", (void *)head, head->n);
                node_count++;
                head = head->next;
            }

            printf("-> [%p] %d\n", (void *)head, head->n);
            node_count++;
            break;
        }
    }

    if (tortoise == NULL || hare == NULL || hare->next == NULL)
    {
        while (head != NULL)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            node_count++;
            head = head->next;
        }
    }

    return (node_count);
}
