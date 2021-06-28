#include "holberton.h"

/**
 * swap_int - swap values of 2 integers
 * @a:
 * @b:
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
