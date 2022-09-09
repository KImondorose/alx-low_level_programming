#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}

