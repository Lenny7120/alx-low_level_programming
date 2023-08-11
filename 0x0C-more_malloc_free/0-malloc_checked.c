#include "main.h"
#include <stdlib.h>

/**
 *allocated_memory -allocates memory using malloc 
 *@b: number of size to be allocated
 *
 * Return: pointer to appointed memory or 98 if it fails
 */


void *malloc_checked(unsigned int b)
{
	void *allocated_memory;

	 allocated_memory = malloc(b);

    if (allocated_memory == NULL)
                        exit(98); 
    
    return allocated_memory;
}
