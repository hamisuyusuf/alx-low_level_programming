#include"main.h"
/**
 *  *_strncat - function that concatenates two strings.
 *  @dest: first string
 *  @src: second string
 *  @n: third string
 *  Return: value
 */
char *_strncat(char *dest, char *src, int n)
{

	int touch = 0, touch2 = 0;

	while (*(dest + touch) != '\0')
	{
		touch++;
	}

	while (touch2 < n)
	{
		*(dest + touch) = *(src + touch2);
		if (*(src + touch2) == '\0')
			break;
		touch++;
		touch2++;
	}
	return (dest);

}
