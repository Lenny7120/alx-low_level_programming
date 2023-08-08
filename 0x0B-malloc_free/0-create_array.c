#include "main.h"
#include <stdlib.h>
/**
 * new_array - pointer to  the array created to be filled with the specific characters 
 * @unsigned a: the function to fill the array with specific character
 *
 * Return : a pointer to an array
 */


char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int a;

    new_array = malloc(size* sizeof(char));
    
    for(a = 0; a < size; a++ )
    {
        new_array[a] = c;
    }
   return new_array;
}

