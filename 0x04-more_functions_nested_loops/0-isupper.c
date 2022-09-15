
#include "main.h"
/**
 * _isupper - int _isupper(int c) function returns 1 if c is uppercase
 *
 * @c: int c
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
<<<<<<< HEAD
if (c >= 'A' && c <= 'Z')
{	
return (1);
}
else
{
return (0);
}
} 
=======
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
>>>>>>> e92630ab46429fe51a04583f90c9e0a2e715fb3b
