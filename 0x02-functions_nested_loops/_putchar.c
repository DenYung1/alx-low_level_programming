#include "main.h"
#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: Always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
