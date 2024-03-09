#include "main.h"

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	char *i = s;
	char *j = s;

	while (*j != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		if (*i != *j)
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
