#include "main.h"

/**
 * _strcat - function that concatenate two strings.
 * @dest: destination string pointer
 * @src:  source string pointer
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int lenght_of_string, z;

lenght_of_string = 0;
while(dest[lenght_of_string] != '\0')
{
lenght_of_string++;
}
for(z = 0; src[z] != '\0'; z++, lenght_of_string++)
{
dest[lenght_of_string] = src[z];
}
dest[lenght_of_string] = '\0';
return(dest);
}
