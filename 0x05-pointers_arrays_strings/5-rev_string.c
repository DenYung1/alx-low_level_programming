#include "main.h"

/**
 * rev_string - functionthat reverse a string
 * @s: input integer
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char dennis;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		dennis = s[i];
		s[i++] = s[len];
		s[len] = dennis;
	}
}
