#include "main.h"
#include <stdio.h>

/**
* print_line - number of times the character
* @n: parameter
* return: returns nothing
*/

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
