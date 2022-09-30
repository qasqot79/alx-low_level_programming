#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * @str: parameter defined in main
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
<<<<<<< HEAD

=======
>>>>>>> fbcabf948fd00457bd652dfe4b122405d10a2afc
