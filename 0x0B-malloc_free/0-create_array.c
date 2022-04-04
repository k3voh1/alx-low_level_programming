#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int i;

if (size == 0)
{
Return (NULL);
}
ch = malloc(sizeof(c) * size);

if (ch == NULL)
{
Return (NULL);
}
for (i = 0; i < size; i++)
{
ch[i] = c;
}
Return(ch);


}
