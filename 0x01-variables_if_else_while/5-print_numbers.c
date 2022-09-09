#include <stdio.h>
#include <stdlib.h>

/**
 * main- Write a program that prints all
 * single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		printf("%d", dig);
	}
	putchar('\n');
	return (0);
}

