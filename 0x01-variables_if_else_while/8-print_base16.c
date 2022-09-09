#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	char let;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (let = 'a'; let <= 'f'; let++)
		putchar (let);
	putchar('\n');
	return (0);
}

