#include "main.h"
/**
*_islower -function to check lowercase characters.
*gc: ls the int that will be used for the arugument
* Return: 0
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
              return (1);
    }
    else
              return (0);
