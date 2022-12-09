#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int w = '0';
	int n = '0';

	for (w = '0'; w <= '9'; w++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (!((w == n) || (w > n)))
			{
				putchar(w);
				putchar(n);
				if (!(w == '9' && n == '8'))
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
