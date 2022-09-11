#include <stdio.h>
/**
 * main - Entry point
 * Description: print all aplhabet letters except q and e
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
