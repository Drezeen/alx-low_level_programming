#include <stdio.h>

/**
 * main -> this the function to print it's name
 * @argc: agrc parameter
 * argv: an array of a command listed
 * Return: 0 for success 
 */
int main(int argc, char *agrv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

