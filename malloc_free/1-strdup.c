#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string using malloc
 *@str: string to duplicate
 *Return: Pointer to the new string
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = str[i]) != '\0')
		i++;

	return (d);
}
