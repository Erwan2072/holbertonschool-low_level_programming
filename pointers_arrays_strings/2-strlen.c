#include "main.h"

/**
*_strlen - returns the length of a string
*@s:string to evaluate
*Return: the length of the sting
*/
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
