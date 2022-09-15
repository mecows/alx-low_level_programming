#include "main.h"

/**
 * print_sign - determines if input is greater, equal or less than zero
 *
 * @n: input is integer
 *
 * Return: 1 is greater than zer, 0 is equal to zero
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
