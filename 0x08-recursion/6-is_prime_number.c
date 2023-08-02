#include "main.h"

int actual_prime(int n, int i);

/**
 *  is_prime_number -  a function that returns 1 if the input integer is a prime number, otherwise return 0
 *  @n: number to evaluate
 *  Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if(n <= 1)
		return(0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 *@n: number to evaluate
 *@i: iterator
 *Return: 1 if n i a prime number, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return(1);
	if(n % i == 0 && i > 0)
		return(0);
	return(actual_prime(n, i - 1));
}

