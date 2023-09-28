#include "main.h"

/**
 * _print_rev_recursion - print string in rev
 * @s: pointer to string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		__putchar(*s);
	}
}
