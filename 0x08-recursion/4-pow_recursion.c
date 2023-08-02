#include "main.h"

/**
 * int _pow_recursion - function that returns the value of x raised to the power of y
 * @x: value to raise
 * @y: the power
 * Return: Result of the power
 */

int _pow_recursion(int x, int y)
{
	if(y < 0)
		return(-1);
	if(y == 0)
		return(1);
	return(x *  _pow_recursion(x, y - 1));
}
