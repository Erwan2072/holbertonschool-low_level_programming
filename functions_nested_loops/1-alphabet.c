#include "main.h"

/**
 *print_alphabet - 1-alphabet.c
 *Description Prints the alphabet followed by a new line
 *Return: void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
