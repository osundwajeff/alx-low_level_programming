#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/* linear search */
int linear_search(int *array, size_t size, int value);

/* binary search */
void print_array(int *array, size_t l, size_t r);
int binary_search_index(int *array, size_t l, size_t r, int value);
int binary_search(int *array, size_t size, int value);

#endif /*search_algos_h*/
