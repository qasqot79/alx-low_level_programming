#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
            int c;

            for (x = '0'; x <= '9'; c++)
	    {
     
                   putchar(x);

                   if (x != '9')
		   {
                          putchar(',');
                          putchar(' ');
		 }
       }
	
       putchar('\n');

       return (0);
}
