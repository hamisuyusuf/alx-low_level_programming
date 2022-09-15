#include"main.h"

/**
 * positive_or_negative - Entry point
 *
 * @n: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{
	/* my if statement */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
