#include "lists.h"

/**
  *print_dlistint - print a doubly list
  *@h: point to head of the list
  *Return: the number of the nodes in the list
  */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
