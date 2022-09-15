#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: input
 *
 * Return: no return.
 */
void print_to_98(void)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else printf("%d, ", n);
}