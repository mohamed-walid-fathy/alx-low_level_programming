#include"main.h"

/**
*memset - sets addresses to char
*@s:pointer to char
*@c:char to be set
*@n: size
*Description: sets addresses pointed to by s
*to char b for n adresses
*Return: char *
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0;i < n;i++)
    {
        *(s + i)=b;
    }
    return s;
}