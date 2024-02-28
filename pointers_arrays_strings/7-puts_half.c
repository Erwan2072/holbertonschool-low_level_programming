#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: pointer to string
 *Return: void
 */

void puts_half(char *str)
{
	int n, L, mid;

	L = 0;
	while (str[L] != '\0')
	{
		L++;
	}

	if (L % 2 == 0)
	{
		mid = L / 2;
		for (n = mid; n < L; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (L - 1) / 2;
		for (n = mid + 1; n < L; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
