#include"main.h"
/**
 * reverse_array - function that reverse two  string.
 * @a: first string
 * @: second string
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int a, j, temp;

	for (a = 0; a < n - 1; a++)
	{
		for (j = a + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
