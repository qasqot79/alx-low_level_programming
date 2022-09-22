#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: char string to concatenate
* @src: char string
* Return: pointer to resulting string `dest`
*/
char *_strcat(char *dest, char *src)
{
int i, c;
<<<<<<< HEAD
for (i = 0; dest[i] != '\0'; i++; 
for (c = 0; src[c] != '\0'; c++)
dest[i] = src[c];
i++;}
dest[i] = '\0';  
=======
for (i = 0; dest[i] != '\0'; i++);
for (c = 0; src[c] != '\0'; c++)
{
dest[i] = src[c];
i++;
}
dest[i] = '\0';
>>>>>>> 74b80e83bcc1650dbf5966bb9c8ed929776bef57
return (dest);
}
