#include"main.h"

/**
*_strpbrk - searches for a string
*@s:string being searched for
*@accept:char being searched in
*Description: locates 1st occurence of s
*in accept
*Return: char *
*/
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
