#include"main.h"

/**
 * _isdigit(int c)- function that check for a digit (0 through 9)
 * @c: digit 0 to 9
 * Return: return 1 if c is a digit otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{

		return (1);
	}

	else
	{
		return (0);
	}
}
