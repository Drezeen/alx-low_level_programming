#include <stdio.h>

/**
 * main -> this the function to print it's name
 * @argc: agrc parameter
 * argv: an array of a command listed
 * Return: 0 for success 
 */
int main(int argc _attribute_((unused)), char *agrv[])
{
	printf("%s\n", *agrv);
	return (0);
}

