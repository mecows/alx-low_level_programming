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
		while (n > 98)
			printf("%d, ", n++);
	}
	else if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else
	{
		printf("%d\n", n);
	}
	return (0);
}
