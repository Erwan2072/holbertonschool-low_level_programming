#include "main.h"

/**
 **_strchr - locates a character in a string
 *@s : the strings to check
 *@c : the character
 *Return: a pointer to the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
		s++;
	}
	return (s);
}
