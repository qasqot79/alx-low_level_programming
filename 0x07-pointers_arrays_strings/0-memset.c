#include "main.h"

/**
<<<<<<< HEAD
 * _memset - Fills the first n bytes of the memory area
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
=======
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
>>>>>>> e5c44fd86d87750e4a719019627df54654d5ca68
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
