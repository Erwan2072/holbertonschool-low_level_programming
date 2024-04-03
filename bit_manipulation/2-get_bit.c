#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the value to get a bit
 * @index: index of the bit
 *
 * Return: returns the value of a bit at a given index, return -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
