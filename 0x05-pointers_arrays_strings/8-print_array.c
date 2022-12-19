#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * @a: input array
 * @n: input integer
 * Return: none
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
