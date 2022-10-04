#include "main.h"

/**
 * _strdup - return the pointer to a newly allocated
 *  space in memory which contains a copy of the 
 *  string given as a parameter.
 *  @str: string to be copied
 *
 *  Return: NUL in case of error.
 *  pointer to the allocated space
 */
char *str_concat(char *s1, char *s2){
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}
