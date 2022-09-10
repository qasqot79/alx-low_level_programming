#include <stdio.h>

/** main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 <= 98; x1++)
	{
		for (x2 = x1 + 1; x2 <= 99; x2++)
		{
			putchar((1 / 10) + '0');
			putchar((1 % 10) + '0');
			putchar(' ');
			putchar((x2 / 10) + '0');
			putchar((x2 % 10) + '0');

			if (x1 == 98 && x2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
