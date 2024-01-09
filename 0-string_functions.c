#include "shell.h"
/**
 * _strlen - returns length of a string
 * @s: the value
 *
 * Return: integer lenght of  string
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 *_strcmp - performs lesicographic comparison of two stings
 *@str1: the first value
 *@str2: the second value
 *
 *Return: negative value if str1 > str2 ,positive if str1
< str2 ,zero if they are equaled
 */
int _strcmp(char *str1, char *str2)
{
while (*str1, *str2)
{
if (*str1 != *str2)
return (*str1 - *str2);
*str1++;
*str2++;
}
if (*str1 == *str2)
return (0);
else
return (*str1 < *str2 ? -1 : 1);
}
/**
 * starts_with - checks if needle starts with haystack
 *@haystack : string to search
 *@needle: the substring to find
 *
 *Return: address of next char of haystach or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}
/**
 * _strcat - concatenates two strings
 *@dest: the destination buffer
 *@src:the source buffer
 *
 *Return: point to destination buffer
 */
char *_strcat(char *dest, char *src)
{
char *r = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (r);
}
