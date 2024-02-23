#include "main.h"

/**
*_abs - calucle la valeur absolue
*@n : lien vers la variable
*Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n <= 0)
		return (-n);
	else
		return (n);
}
