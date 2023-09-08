#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
    int *array, i, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    array = malloc(sizeof(int) * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        array[i] = min++;

    return (array);
}
