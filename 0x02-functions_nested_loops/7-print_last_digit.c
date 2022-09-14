#include "main.h"

/**
 * print the last digit of a number.
 * main - entry point
 * @number: integer
 * Description: Prints the last digit of a number,return the value.
 *
 * Return: Always 0
 */
int print_last_digit(int number)
{
int lastDigit = number % 10;
if (lastDigit < 0)

lastDigit = lastDigit * (-1);
_putchar('0' + lastDigit);
return (lastDigit);
}
