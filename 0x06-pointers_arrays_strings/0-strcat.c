#include "main.h"

/**
 * *_strcat - concatenates string src to string dest
 * @destlen: stores length of dest string pre-concatenation
 * @strlen: stores length of str string pre-concatenation
 * @i: index and loop count of string str
 * 
 * Description: line 47 starts with replacing '\0' with first char of src
 * 
 * Return: concatenated string dest (as pointer)
 */
char *_strcat(char *dest, char *src)
{
       int destlen;
       int srclen;
       int i;

       destlen = _strlen(dest); /* We don't pass it as a pointer here because*/
       srclen = _strlen(src); /* it's already declared above*/

       i =0;
       while (i <= srclen)
       {
                dest[destlen + i] = src[i];
                i++;
       }

       dest[destlen + srclen + 1] = '\0';
       return dest;
}

/**
 * _strlen - calculates the length of the string
 * @i: array index
 * @count: count for incrementing loop
 * 
 * Return: length of the string
 */
int _strlen(char *str)
{
        int i;
        int count;

        i= 0;
        count = 0;
        while (str[i] != '\0')
        {
                count++;
                i++;
        }

        return count;
}
