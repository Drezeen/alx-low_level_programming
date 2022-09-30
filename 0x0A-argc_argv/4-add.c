#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this the function to print it's name
 * @argc: agrc parameter
 * argv: an array of a command listed
 * Return: 0 for success 
 */
int main(int argc, char *arg[])
{
	int result = 0, num, i, j, k;
	 
	for (i = 0; i < argc; i++)
	{
		for ( j = 0; arg[i][j] != '\0'; j++)
		{
			if (arg[i][j] > '9' || arg[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for ( k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	} 
	printf("%d\n", result);
	return (0);
}

