#include "main.h"
#include <stdio.h>

/**
 * main - swaps the values of two integers
 * using two input parameters
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;	
}
