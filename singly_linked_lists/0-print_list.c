#include "lists.h"
/**
 * print_list - print a list hen she's not empty
 * @h: elements of list
 * Return: size of the list
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t c;

	c = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		c++;
	}

	return (c);
}
