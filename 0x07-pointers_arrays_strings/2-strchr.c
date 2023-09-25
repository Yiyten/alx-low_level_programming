#include "main.h"

/**
 * *_strchr - fills momorry b constant byte
 * @s: pointer to choose the constant
 * @c: constant
 * Return: pointer to 0
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'  ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
