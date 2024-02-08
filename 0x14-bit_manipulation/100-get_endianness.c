#include "main.h"
/**
 * get_endianness - checks the endiannesss
 * Return: 0 if big endian, 1 isf littlee enddian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
