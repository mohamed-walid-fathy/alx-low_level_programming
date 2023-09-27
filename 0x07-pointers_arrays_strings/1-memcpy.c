#include "main.h"

/**
 *_memcpy - copies addresses to char
 *@dest:pointer to destination char
 *@src:pointer to source char
 *@n: size
 *Description: copies addresses pointed to by src
 *to dest for n adresses
 *Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
