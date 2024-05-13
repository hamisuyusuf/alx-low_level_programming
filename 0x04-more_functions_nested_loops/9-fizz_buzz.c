#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: 0
 */

int main()
{
	
	int i = 1;
	while (i <= 100)
	{
		int is_divisible_by_three = (i % 3 == 0);
		
		int is_divisible_by_five = (i % 5 == 0);

		if (is_divisible_by_three && is_divisible_by_five)
		{
			printf("FizzBuzz ");
		}
		else if (is_divisible_by_three)
		{
			printf("Fizz ");
		}
		else if (is_divisible_by_five)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return 0;
}

