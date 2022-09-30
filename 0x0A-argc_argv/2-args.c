#include <stdio.h>

/**
 * main -> this the function to print it's name
 * @argc: agrc parameter
 * argv: an array of a command listed
 * Return: 0 for success 
 */
int main(int argc, char *agrv[])
{
	int i;
	 
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
