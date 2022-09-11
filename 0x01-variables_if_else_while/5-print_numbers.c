#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:  a program that prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int b = 0 ;
       	
	
	while (b <= 9 )
	{
		putchar(b);
		b++;
	}	

	putchar('\n');

	return(0);
}
