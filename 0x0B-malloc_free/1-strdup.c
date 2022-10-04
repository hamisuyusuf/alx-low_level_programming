#include "main.h"

/**
 * _strdup - function that duplicate string
 * @str: string pointer
 * Return: char
 */
char *_strdup(char *str)
{
	char *pointer;
	int i;
	int sizeStr = 1;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		sizeStr++;

	pointer = malloc(sizeof(*str) * sizeStr);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < sizeStr; i++)
		pointer[i] += str[i];
	return (pointer);

}
