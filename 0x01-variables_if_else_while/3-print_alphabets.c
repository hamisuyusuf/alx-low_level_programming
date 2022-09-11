#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point 
 * Description:  a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char b = 'k';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	
	b = 'K';

	while (b <= 'Z')
	{
		putchar(b);
		b++
	}
		
	putchar('\n');
	return (0);
	

}
