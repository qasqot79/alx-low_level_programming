#include "main.h"

/**
 * @strcat - function that concatenates two strings.overwrite the terminating null byte (\0) at the end of dest 
 * and add a terminating null byte.
 *
 * @src appends the string to the dest string,
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
         int index = 0, dest_len = 0;
         
         while (dest[index++])
                dest_len++;
        
         for (index = 0; src[index]; index++)
                dest[dest_len++] = src[index];
        
         return (dest);
}
