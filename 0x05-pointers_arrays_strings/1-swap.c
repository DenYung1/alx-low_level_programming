#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int dennis;

	dennis = *a;
	*a = *b;
	*b = dennis;
}
