#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int s1_len = 0, s2_len = 0, i = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[s1_len])
        s1_len++;
    while (s2[s2_len])
        s2_len++;

    if (n >= s2_len)
        n = s2_len;

    concat = malloc(sizeof(char) * (s1_len + n + 1));

    if (concat == NULL)
        return (NULL);

    while (*s1)
        concat[i++] = *s1++;

    i = 0;
    while (*s2 && i < n)
        concat[s1_len + i++] = *s2++;

    concat[s1_len + i] = '\0';

    return (concat);
}
