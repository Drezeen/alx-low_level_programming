#include "main.h"

/**
 * _put_recursion prints 's a string followed by new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *)
{
	if (*s == '\0')
	{
		_putchar("\n");
	}
	else
	{
		_putchar(s[0]);
		_put_recursion(s +1);
	}
}

