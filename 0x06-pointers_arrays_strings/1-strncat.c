#include "main.h"

/**  
 * _strncat - function that concatenates two strings,does not need to 
 * be null-terminated if it contains n or more bytes.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
         int index = 0, dest_len = 0;
        
         while (dest[index++])
                  dest_len++;
       
	        for (index = 0; src[index] && index < n; index++)
                            dest[dest_len++] = src[index];
       
         return (dest);
}
