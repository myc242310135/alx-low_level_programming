#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The charater to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _puychar(char c)
{
	return (write(1, &c, 1));
}
