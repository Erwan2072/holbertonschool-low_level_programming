#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: points to a string containing the binary input
  *Return: decimal value of input, return 0 if failure
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		value = value * 2 + (b[i] - '0');
		i++;
	}
	return (value);
}
