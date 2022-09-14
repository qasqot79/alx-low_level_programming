#include "main.h"

/**
 * print_to_98 - prints from any integer to 98
 * @n: integer input
 *
 * Return: void
 */

void print_to_98(int n)
{
	   while (n != 98)
	   {
       	putchar("%i, ", n);
	        if (n > 98)
	               n--;
	       else
	           n++;
	   }
     putchar("98\n");
     return (0);
}
