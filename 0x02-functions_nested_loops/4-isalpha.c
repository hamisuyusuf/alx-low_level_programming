#include"main.h"

/**
 * _isalpha -> returns 1 if c is a letter, lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: Returns 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
