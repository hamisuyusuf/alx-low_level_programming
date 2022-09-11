#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char k = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}

	char b = 'a';

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}

