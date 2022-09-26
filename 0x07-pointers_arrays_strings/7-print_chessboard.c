#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int a, b = 0;

	for (a = 0; a < 64; a++)
	{
		if (a % 8 == 0 && a != 0)
		{
			b = a;
			_putchar('\n');
		}
		_putchar(a[a / 8][a - b]);
	}
	_putchar('\n');
}
