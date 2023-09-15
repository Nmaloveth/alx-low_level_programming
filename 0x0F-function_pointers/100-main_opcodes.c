#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a given function
 * @a: pointer to the function to print opcodes of
 * @size: the number of bytes to print
 */

void print_opcodes(char *a, int size)
{
        int i;

        for (i = 0; i < size; i++)
        {
                printf("%.2hhx", a[i]);
                if (i < size - 1)
                        printf(" ");
        }
        printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the function
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char **argv)
{
        int num_bytes;
        char *main_addr;

        if (argc != 2)
        {
                printf("Usage: %s <number of bytes>\n", argv[0]);
                return (1);
        }

        num_bytes = atoi(argv[1]);

        if (num_bytes <= 0)
        {
                printf("Invalid number of bytes: %d\n", num_bytes);
                return (1);
        }

        main_addr = (char *)main;

        printf("Address of main function: %p\n", main);

        print_opcodes(main_addr, num_bytes);

        return (0);
}
