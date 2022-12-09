#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int w;

	for (w = 0; w < 100; w++)
	{
		putchar((w / 10) + '0');
		putchar((w % 10) + '0');
		if (w != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
