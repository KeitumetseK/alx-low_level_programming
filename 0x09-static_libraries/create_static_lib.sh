#!/bin/bash
gcc -Wall -pendantic -werror -wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
