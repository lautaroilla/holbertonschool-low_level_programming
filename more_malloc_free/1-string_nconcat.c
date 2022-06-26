#include "main.h"
/**
 * *string_nconcat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * @n: Element.
 * Return: s1 + s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int b = 0, i = 0, c1 = 0, c2 = 0;

if (s1 == NULL)
	return (NULL);
if (s2 == NULL)
	return (NULL);

for (c1 = 0; s1[c1]; c1++)
{
}
for (c2 = 0; s2[c2]; c2++)
{
}
if (n >= c2)
n = c2;
a = malloc(sizeof(char) * (c1 + n) + 1);
if (a == NULL)
	return (NULL);
for (b = 0; b < c1; b++)
{
a[b] = s1[b];
}

for (i = b; i < (b + n); i++)
a[i] = s2[i - b];

a[i] = '\0';
return (a);
}
