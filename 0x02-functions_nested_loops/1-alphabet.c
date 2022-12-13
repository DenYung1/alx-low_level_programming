#include "main.h"

/**
 * print_alphabet - check description
 * Description: prints the alphabet in lowercase followed by a new line
 * Return: nothing
 */
void print_alphabet(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
		_putchar(w);
	_putchar('\n');
}
