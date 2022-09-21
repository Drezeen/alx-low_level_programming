#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @scr to the end of the string pointed to by @ dest
 * @dest: string that will be appended
 * @scr: string to be concantenated upon
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *scr)
{

	 int index = 0, dest_len = 0;
	  while(dest[index++])
		    dest_len++;

	   for( index = 0; scr [index]; index++)
		     dest(dest_len++) = scr[index];

	   return(dest);
}



