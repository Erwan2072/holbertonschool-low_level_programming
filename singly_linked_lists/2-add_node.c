#include "lists.h"
/**
 * add_node - add a node to a singly linked list
 * @head: points to the start of a list
 * @str: string to put in the element
 *
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL || new_node == NULL  || str == NULL)
	return (0);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
