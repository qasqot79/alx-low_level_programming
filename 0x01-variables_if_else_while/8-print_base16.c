#include <stdio.h>

/**
 * function - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)

{  
       int num;
       char letter;
         
       for (num = 0; num < 10; num++)
        {   
        putchar(base_16);
         } 
        for (letter = 'a'; letter <= 'f'; letter++)
        {  
                    putchar(letter);

         } 
	
         putchar('\n');

         return (0);
} 
