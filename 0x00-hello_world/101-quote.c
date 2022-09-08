#include <unistd.h>
<<<<<<< HEAD
=======
/**
 *main-program entry point.
 *
 *Return: 1 on success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}


>>>>>>> ba123eb1dd59d708314417fcf604e27eca6fb021

/**
* main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
* followed by a new line, to standard error.
*
* Return: Always 1.
*/
int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
59);

return (1);
}

c
