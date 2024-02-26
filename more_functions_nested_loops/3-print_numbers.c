#include "main.h"

/**
*print_numbers - prints the numbers, from 0 to 9
*followed by a new line
*Return : Always 0 (Success)
*/

void print_numbers(void)
{
	int nb;

       for (nb = 0 ; nb < 10 ; nb++)
	       {
		_putchar(nb + '0');
	}

	_putchar('\n');
}
