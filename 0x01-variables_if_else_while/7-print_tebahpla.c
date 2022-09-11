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
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}

	putchar('\n');
	return (0);
}
