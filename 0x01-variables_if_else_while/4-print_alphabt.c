#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a';  <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
                if (alphabet == 'e')
			continue;
			putchar(alphabet);	
	}
	putchar('\n');

	return (0);
}
