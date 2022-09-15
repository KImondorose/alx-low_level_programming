#include "main.h"

/**
 * main- checks for uppercase letter
 * Return: 0 (success)
 */

int _isupper(int c)
{
	int c;

	c = 65;
	if (isupper(c))
	{       
		_putchar(49);
	}
	else 
		_putchar(48);
	return (0);
}
