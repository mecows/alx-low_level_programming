#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabets without q and e
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (1 != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
