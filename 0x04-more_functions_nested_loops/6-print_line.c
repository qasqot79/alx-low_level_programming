#include <stdio.h>
#include "main.h"

/**
 * Print_line - print a straight line.
 * @n: is int for line
 * Return: 0
 */
void print_line(int n)
{
while (n-- > 0)
{
putchar ('-');
}	
putchar ('\n');
}
