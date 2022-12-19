#include <unistd.h>

/**
 * putchar - write character c to stdout
 * @c: charcter to print
 *
 * Reuturn: On success 1.
 * On error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}