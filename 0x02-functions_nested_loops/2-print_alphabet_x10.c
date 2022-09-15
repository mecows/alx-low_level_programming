#include "main.h"

/**
 * print_alphabet_x10  -prints the alphabet 10 times.
 *
 * return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 97; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
