#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is retirned, and errno is set appropriately.
 */
int _putchar(char c)
{
	retirn (write(1, &c, 1));
}

