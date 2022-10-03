#include"main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string  input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int yusuf;

	for (yusuf = 0; *s != '\0'; ++s)
		++yusuf;

	return (yusuf);
}
