#include "main.h"
/**
 * set_bit - value of a bit to 1 at a given index
 * @n:  pointer to the number to change
 * @index: index of bit starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
