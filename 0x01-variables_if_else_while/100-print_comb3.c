#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int w, n;

	for (w = 48; w <= 56; w++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (w > n)
			{
				putchar(w);
				putchar(n);
				if (w != 56 || n != 57)
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
