#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
