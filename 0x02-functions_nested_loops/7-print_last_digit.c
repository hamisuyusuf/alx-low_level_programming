#include"main.h"

/**
 * print_last_digit -> print last digit of a number
 * @n: last digit
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
