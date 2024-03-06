#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or '\0' if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
