#include "main.h"
/**
 * main - print putchar prototype
 * Return: Always 0
 */
int main(void)
{
	int ch;
	char put[] = "_putchar";

	for(ch = 'A'; ch <= 'Z'; ch++)
		_putchar(put[ch]);
	_putchar('\n');
	return 0;
}
