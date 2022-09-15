#include "main.h"

/**
 * _islower - shows 1 for lowercase, shows 0 for others cases
 *
 * @c: ASCII character
 * return: 1 for lowercase. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
