#include "main.h"

/**
 * Write a function that multiplies two integers.
 * Prototype: int mul(int a, int b);
 * Return: 0
 */ 

int main (void)
{
    int a;
    int b;
    int mult;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("ENter the second number\n");
    scanf("%d", &b);

    mult = a*b;

    printf("THe product of %d and %d is %d\n", a, b, mult);
    return (0);
}
