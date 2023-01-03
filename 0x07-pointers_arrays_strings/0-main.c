#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
<<<<<<< HEAD
	unsigned int i;

	i = 0;
	while (i < size)
=======
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
>>>>>>> 6fe59c576b2d4f8351fa9e961f9fe5daa843b78a
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("----------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
=======
  char buffer[98] = {0x00};

  simple_print_buffer(buffer, 98);
  _memset(buffer, 0x01, 95);
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98);    
  return (0);
>>>>>>> 6fe59c576b2d4f8351fa9e961f9fe5daa843b78a
}
