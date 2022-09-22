#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: first string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int touch = 0, i;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + touch) >= 97 && *(s + touch) <= 122)
		*(s + touch) = *(s + touch) - 32;
	touch++;
	while (*(s + touch) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + touch) == words[i])
			{
				if ((*(s + (touch + 1)) >= 97) && (*(s + (touch + 1)) <= 122))
					*(s + (touch + 1)) = *(s + (touch + 1)) - 32;
				break;
			}
		}
		touch++;
	}
	return (s);
}
