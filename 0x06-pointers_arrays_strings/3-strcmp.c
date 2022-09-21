#include "main.h"

/**
* @strcmp - compare two strings. 
* function that works exactly like strcmp
* 
* Return: comparison of two strings.
*/
int _strcmp(char *s1, char *s2)
{
          while (*s1 && *s2 && *s1 == *s2)
          {
                       s1++;
                       s2++;
          }
           
          return (*s1 - *s2);
} 
