#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the strings pointed to by src
 * @dest: pointer to dsetination
 * @src: pointer to source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
