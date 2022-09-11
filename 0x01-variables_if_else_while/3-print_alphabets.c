#include <stdio.h>
/**
 * main - Entry point
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
