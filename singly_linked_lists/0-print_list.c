#include "lists.h"
#include <stdio.h>

/**
 * print_list - imprime todos los elementos de una lista list_t
 * @h: puntero al inicio de la lista
 *
 * Return: el número de nodos
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        count++;
        h = h->next;
    }

    return (count);
}

