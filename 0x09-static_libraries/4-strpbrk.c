#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, j;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + a) == *(accept + j))
				return (s + a);
		}
	}
	return ('\0');
}
