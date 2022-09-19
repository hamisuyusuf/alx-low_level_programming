#include"main.h"

/**
 * swap_int - swap the value of the two int
 * @a: first int
 * @b: swcond int
 */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;

}
