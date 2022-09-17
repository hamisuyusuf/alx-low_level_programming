#include"main.h"

/**
 * _isupper(int c)- function that checks for uppercase character
 * @c: test if c is uppercase
 * Return: return 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))

	{
		return (1);
	}

	else

	{
		return (0);
	}


}
