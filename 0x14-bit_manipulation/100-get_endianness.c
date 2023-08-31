#include "main.h"
/**
 * get_endianness - endianness checks
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
