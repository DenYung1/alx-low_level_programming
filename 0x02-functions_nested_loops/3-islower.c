#include "main.h"

/**
 * _islower - function that check for lowercase
 * @c: An input character
 * Return: Always 1
 */
int _islower(int c)
{
	char w;
	int dennis = 0;

	for (w = 'a'; w <= 'z'; w++)
	{
		if (w == c)
			dennis = 1;
	}
	return (dennis);
}
