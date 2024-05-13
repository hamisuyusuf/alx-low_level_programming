#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: parameter
 */

void print_square(int size)

{

	int i = 0;

	while (i < size && size > 0)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
