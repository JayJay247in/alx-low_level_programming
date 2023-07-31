#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *tortoise, *hare, *temp;
    size_t node_count = 0;

    if (h == NULL || *h == NULL)
        return (0);

    tortoise = *h;
    hare = *h;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            hare = *h;
            while (tortoise != hare)
            {
                temp = hare;
                hare = hare->next;
                free(temp);
                node_count++;
            }

            *h = NULL;
            free(tortoise);
            node_count++;
            break;
        }
    }

    if (tortoise == NULL || hare == NULL || hare->next == NULL)
    {
        while (*h != NULL)
        {
            temp = *h;
            *h = (*h)->next;
            free(temp);
            node_count++;
        }
    }

    return (node_count);
}
