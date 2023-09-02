#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -r liball.a *.o
