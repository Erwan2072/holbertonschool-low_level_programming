#include <stdio.h>

/**
*main - 9-print_comb.c
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar (i + '0')
if (i > 9)
{
putchar (32);
putchar (44);
}
putchar ('\n');
return (0);
}
