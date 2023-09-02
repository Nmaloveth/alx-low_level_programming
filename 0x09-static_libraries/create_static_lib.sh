#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -r liball.a *.o
