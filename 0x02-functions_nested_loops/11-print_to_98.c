#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: input
 *
 * Return: no return.
 */
int print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", "98 ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", "98 ", n);
		}
	}
	else
	{
		printf("%d ", n);
	}
	return (0);
}
