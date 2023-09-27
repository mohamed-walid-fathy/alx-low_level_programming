#include"main.h"

/**
*strchr - searches for char in str
*@s:string
*@c:char being searched for
*Description: searches for c in s
*Return: char *
*/
char *_strchr(char *s, char c)
{
    unsigned int i = 0;

    while(*(s + i) != '\0')
    {
        if (*(s + i) == c)
        {
            char *ptr = (char *)(s + i);
            return ptr;
        }
        
        i++;
    }
    return NULL;
}