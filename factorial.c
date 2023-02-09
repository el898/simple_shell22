#include <stdio.h>
#include "main.h"
/*
 * factorial: calculates the factorial of a given integer n
 * @n: integer argument for the program
 * Return: Always 0
 */

int factorial(int n)
{
	int n;
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;

	}
	return (result);
}

