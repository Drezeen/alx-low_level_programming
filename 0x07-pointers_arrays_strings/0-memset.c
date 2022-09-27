# include "main.h"

/**
 * _memset - fill a memory block with a constant byte
 * @s: address to memory block
 * @b: chart be used
 * @n: number of byte to be used
 *
 * return pointer to the memory block
 */

char *_ memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s(n - 1) = b;
		n++;
	} 
	return (s);
}


