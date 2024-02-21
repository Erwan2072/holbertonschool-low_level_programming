#include "main.h"

/**
 *print_alphabet_x10 - x10
 *that prints 10 times the alphabet followed by a new line
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a;
	int i;
	i = 0;

	while (i <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

	_putchar('\n');	
        i++;
	}
}
