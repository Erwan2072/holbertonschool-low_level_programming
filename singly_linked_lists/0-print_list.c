#include "lists.h"
/**
 * print_list - print a list hen she's not empty
 * @h: elements of list
 * Return: size of the list
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t c = 0;

	if (ptr->str == NULL)
		printf("[0](nil)\n");
	else
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		c++;
		ptr = ptr->next;
	}

	return (c);
}
