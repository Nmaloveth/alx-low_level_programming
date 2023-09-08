#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
        int i, j, len1, len2, lenres, carry, n1, n2, res;
        int *result;

        if (argc != 3)
        {
                printf("Error\n");
                return (98);
        }
        for (i = 0; argv[1][i]; i++)
        {
                if (argv[1][i] < '0' || argv[1][i] > '9')
                {
                        printf("Error\n");
                        return (98);
                }
        }
        for (i = 0; argv[2][i]; i++)
        {
                if (argv[2][i] < '0' || argv[2][i] > '9')
                {
                        printf("Error\n");
                        return (98);
                }
        }
        len1 = i;
        len2 = i;
        lenres = len1 + len2;
        result = calloc(lenres, sizeof(int));
        if (result == NULL)
                return (1);
        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                n1 = argv[1][i] - '0';
                for (j = len2 - 1; j >= 0; j--)
                {
                        n2 = argv[2][j] - '0';
                        res = n1 * n2 + result[i + j + 1] + carry;
                        carry = res / 10;
                        result[i + j + 1] = res % 10;
                }
                if (carry)
                        result[i + j + 1] += carry;
        }
        for (i = 0; result[i] == 0 && i < lenres - 1; i++)
                ;
        for (; i < lenres; i++)
                printf("%d", result[i]);
        printf("\n");
        free(result);
        return (0);
}
