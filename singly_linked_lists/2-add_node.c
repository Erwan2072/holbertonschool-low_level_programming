#include "lists.h"
/**
 * add_node - add a node of a list
 * @head: start of the list
 * @str: strings to add to the list
 * Return: size of string added
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (struct lists *) malloc(sizeof(struct lists));

	if (head == NULL || new_node == NULL)
		return (0);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
