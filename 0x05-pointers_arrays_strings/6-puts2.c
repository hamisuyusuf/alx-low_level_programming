#include"main.h"

/**
 * puts2 - print out every char
 * @str: prototype
 * Return: new line
 */
void puts2(char *str)
{
	int len, a; 

	len = strlen(str);
	for (a = 0; a < len; i += 2)
	      _putchar(str[a]);
	_putchar('\n');

}
