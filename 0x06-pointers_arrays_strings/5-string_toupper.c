#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int touch = 0;

	while (*(s + touch) != '\0')
	{
		if ((*(s + touch) >= 97) && (*(s + touch) <= 122))
			*(s + touch) = *(s + touch) - 32;
		touch++;
	}

	return (s);
}
