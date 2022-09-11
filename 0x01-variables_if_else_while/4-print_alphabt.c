#include <stdio.h>
/**
 * main - Entry point
 *
 * 
 * Description: Get a random number and check its last digit, compare it with 5
 * 
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
		b++;
	}

	putchar('\n');
	return (0);
}
