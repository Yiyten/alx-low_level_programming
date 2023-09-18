#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * 8dest: char type string
 * 8src:char type string
 * Description: copy the string pointed to by pointer 'src' to
 * 	the buffer pointed to by 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
