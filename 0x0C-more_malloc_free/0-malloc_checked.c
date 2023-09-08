#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate in bytes
 *
 * Return: pointer to the allocated memory
 * If malloc fails, terminate the program with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(98);
    }

    return (ptr);
}
