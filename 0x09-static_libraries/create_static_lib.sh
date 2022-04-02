#!/bin/bash
do 
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
then
	ar -rc liball.a *.o
