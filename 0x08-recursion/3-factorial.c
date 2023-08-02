#include "main.h"

/**
 * int factorial - return the factorial of a number 
 * @n: number to return the factorial form
 * Retrn: factorial of n
 */


int factorial(int n)
{
	if(n < 0)
		return(-1);
	if(n == 0)
		return(1);
	return(n * factorial(n - 1));
}
