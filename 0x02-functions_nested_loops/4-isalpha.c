#include "main.h"

/**
 * _isalpha - shows 1 for letters, 0 for others.
 *
 * @c: ASCII character
 *
 * return: 1 for letters, 0 for others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
