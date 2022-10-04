#include <stdio.h>

/**
 * main -> this the function to print it's name
 * @argc: agrc parameter
 * argv: an array of a command listed
 * Return: 0 for success 
 */
int main(int argc __attribute__((unused)), char *agrv[])
{
	printf("%s\n", agrv[0]);
	return (0);
}
