#include "main.h"

/**
 * print the last digit of a number.
 * main - entry point
 * @number: integer
 * Description: .
 *
 * Return: value of the last digit.
 */
int print_last_digit(int number)
{
int lastDigit = number % 10;
if (lastDigit < 0)

lastDigit = lastDigit * (-1);
_putchar('0' + lastDigit);
return (lastDigit);
}
