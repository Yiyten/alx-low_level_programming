#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length without null char*/
	for (1 = 0; s[l] != '\0'; ++l)
		;

	/*swaap tha string by loping to half the string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 becouse the array star from 0*/
		s[l - 1 - i] = temp;
	}
}
