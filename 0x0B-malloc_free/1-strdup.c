#include"main.h"
#include <stdlib.h>
/**
 *char *_strdup -  a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string.
 * @int length: check for the length of array
 * @int count: copy string to a new location
 * Return: pointer to a newly allocated memory
*/



char *_strdup(char *str)
{
	char *ptsr;
	int length = 0;
	while(str[length] != '\0')
	{       	
		length++;
	}
	 
	ptsr = malloc((length * sizeof(char)) + 1);

	if (ptsr == NULL)
	{
	return NULL;
	}
	int count;
	
	for(count = 0; str[count] != '\0'; count++)
	{
	ptsr[count] = str[count];
	}

	ptsr[count] = '\0';

	
	return (ptsr);
}	
	

