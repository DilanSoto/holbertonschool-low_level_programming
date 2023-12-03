#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	new_node = malloc(sizeof(list_t));

	/* Check if memory allocation failed */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* Duplicate the string */
	if (new_node->str == NULL) /* Check if strdup failed */
	{
		free(new_node);
		return (NULL);
    }

	new_node->len = strlen(str); /* Set the length of the string */
	new_node->next = NULL; /* The new node will be the last node */

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
	   	*head = new_node;
	}
	else
	{
	/* Otherwise, traverse to the end of the list and add the new node */
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
