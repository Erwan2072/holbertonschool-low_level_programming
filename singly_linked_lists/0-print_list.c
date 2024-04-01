#include "lists.h"
/**
 *print_list - prints all the elements of a list_t list
 *@h: the list_t list.
 *
 * Return: the numbre of nodes in h.
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
