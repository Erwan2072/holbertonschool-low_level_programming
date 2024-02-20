#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
int alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++;)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'A'; alphabet++;)
{
putchar(alphabet);
}
putchar('\n')

return (0);
}
