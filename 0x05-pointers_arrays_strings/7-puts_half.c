#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string  input
 *
 * Return: new line
*/

void puts_half(char *str)
{
	int a, n;

	for (a = 0; str[a] != '\0'; ++a)
		;

	if (a % 2 == 0)
	{
		for (n = a / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((a - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
