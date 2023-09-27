#include"main.h"

/**
*_strstr - seraches for s substr in str
*@haystack:string being searched in
*@needle:substring being searched for
*Description: searches for needle in haystack
*Return: char *
*/

char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
	{
		char *h = haystack;
		char *look = needle;

		while (*h == *look && *look != '\0')
		{
			h++;
			look++;
		}

		if (*look == '\0')
			return (haystack);
        haystack++;
	}

	return (0);


}
