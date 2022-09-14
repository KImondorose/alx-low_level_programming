#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- print the alphabet in lowercase followed by a new line
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
    {
        putchar(i);
	putchar('\n');
    }
}
