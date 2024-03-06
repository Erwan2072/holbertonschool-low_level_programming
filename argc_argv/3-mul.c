#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: argt count
 *@argv: argt vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int result = n1 * n2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
