#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list(const list_t *h) print all element of list_T
 * @h: the first element
 * Return: the number of nodes
 * */

//prototipo
size_t print_list(const list_t *h)
{
	size count =0;
	
	while (h != NULL)
	{
		if(h->str == NULL)
		{
			printf([0] (nil)\n");
		}
		else
		{
			printf("[%u], %s\n", h->len, h->str);
		}
	h = h->next;
	count++;
	}
	return count;
}

