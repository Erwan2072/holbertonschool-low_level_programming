#include <stdio.h>

/**
*main - 8-print_base16.c
*
*Return: Always 0 (Success)
*/

int main(void)
{
int number;
char alph;

for (number = '0'; number <= '9'; number++)
putchar(number);
for (alph = 'a' ; alph <= 'f' ; alph++)
putchar(alph);
putchar('\n');
return (0);
}
