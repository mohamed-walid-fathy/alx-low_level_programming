#include"main.h"

/**
*_strchr - searches for char in str
*@s:string
*@c:char being searched for
*Description: searches for c in s
*Return: char *
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
