#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of time the \ character
 *	should be printed
*/

void print_diagonal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

