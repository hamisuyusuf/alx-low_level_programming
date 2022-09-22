#include"main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: third string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++ )
		dest[a] = '\0';

	for ( ; a < n; a++)
		dest[a] = '\0';

	return (dest);



}
