#include "main.h"

/**
 * main - function that prints alphabets in lower case
 * Description: prints in lower case
 * Return: nothing
 */
void print_alphabet(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
		_putchar(w);
	_putchar('\n');
}
