#include "main.h"
/**
 * rev_ string - print a reverse string
 * @s: a pointer to an int that will be changed 
 *
 * return: void
 */
void rev_ string(char *s)
{
	char *start_c, *end_c, c;
	int i, count;
	int length = 0;
	 
	for (i = 0; s[i]; I++)
	{
		length++;
	}

	count = lenght;

	start_c = s;
	end_c = s;

	for (i = 0; i < count - 1; i++)
	{
		end_c++;
	}
	for (i = 0; i < count / 2; i++)
	{

		c = *end_c;
		*end_c = *start_c;
		* start_c = c;

		return 0;
	
	}
}

