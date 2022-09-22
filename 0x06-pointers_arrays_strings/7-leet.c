#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int touch = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + touch) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + touch) == low_letters[i] || *(s + touch) == upp_letters[i])
			{
				*(s + touch) = numbers[i];
				break;
			}
		}
		touch++;
	}

	return (s);
}
