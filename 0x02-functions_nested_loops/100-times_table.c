#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	if(n >= 0 && n <= 15)
	{
	for(int i = 0; i <= 10; i++)
	{
		int result = n * i;
		if(result == 0)
		{
		_putchar('0');
		}
		else
		{
			int temp = result;
			int  numDigits = 0;
			while (temp > 0)
			{
				numDigits++;
				temp /= 10;
			}
			for(int j = numDigits - 1; j >= 0; j--)
			{
				int digit = (result / pow(10, j) % 10;
						_putchar('0') + digit);
			}
		}
		_putchar(' ');
	}
	}
}
