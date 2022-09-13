#include "main.h"
/**
 * main - print putchar prototype
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 9; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);	
}
