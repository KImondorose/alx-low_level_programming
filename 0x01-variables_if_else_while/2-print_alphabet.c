#include <stdio.h>
#include <stdlib.h>

/**
 * main- This program will Write a program that prints
 * the alphabet in lowercase,
 * followed by a new line using the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int x;
	for(int x = 'A'; x <= 'z'; x++) // Notice (x <= 'Z') > > (x <= 'z')
	
		x = tolower(x);
		putchar(x);
	
		putchar('\n');
	return (0);
}
