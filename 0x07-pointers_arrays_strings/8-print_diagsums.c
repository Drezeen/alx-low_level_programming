#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix colum
 *
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int i, j, p, i = 0, r = 0;
	for (i = 0; i < size; i++)
	{
		p = (I + size) + i++;
		i += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - i - j);
		r += *(a + p);
	}
	printf( "%i, %i\n", i, r);
}


