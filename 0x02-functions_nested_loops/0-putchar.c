#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int w;

	for (w = 0; w < 9; w++)
		_putchar(word[w]);
	_putchar('\n');
	return (0);
}
