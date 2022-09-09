#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alpahbet;

	for (alpahbet = 'a';  <= 'z'; alpahabet++)
	{
		if (alpahbet == 'q')
			continue;
                  
		if (alpahbet == 'e')
			continue;
		
			putchar(alphabet);
		
	}

	putchar('\n');

	return (0);
}



