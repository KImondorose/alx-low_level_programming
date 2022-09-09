#include <stdio.h>
#include <stdlib.h>

/**
 * Main: This program will Write a program that prints
 * the alphabet in lowercase,
 * followed by a new line using the putchar function
 * Return - 0 (success)
 */

int main(void)
{
	int x;

	for (int x = 'a'; x <= 'z'; x++)

		putchar(x);

	for(int x = 'A'; x <= 'Z'; x++)

		putchar(x);

		putchar('\n');
	return (0);
}
