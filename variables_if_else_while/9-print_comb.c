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
if (i != 9)
{
putchar ('0' + i);
putchar (32);
putchar (44);
}
else
putchar ('0' + i);
}
return (0);
}
