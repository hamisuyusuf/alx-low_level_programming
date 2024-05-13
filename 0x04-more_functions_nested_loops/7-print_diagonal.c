#include "main.h"

/**
* print_diagonal - print_diagonal
* @n: parameter
*/

void print_diagonal(int n)
{
	int i = 0;
	while (i < n && n > 0)
	{
		int j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
			_putchar('\\');
			_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
