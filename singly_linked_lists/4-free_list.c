#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
	next = current->next; /* Save reference to the next node */
		free(current->str);   /* Free the string */
		free(current);        /* Free the node */
		current = next;       /* Move to the next node */
	}
}
