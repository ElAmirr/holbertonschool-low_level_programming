#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the first node.
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t i = 0;

    if (h == NULL)
    {
        return (0);
    }
    while (h != NULL)
    {
        printf("%d\n", h->n);
        i++;
        h = h->next;
    }

    return (i);
}