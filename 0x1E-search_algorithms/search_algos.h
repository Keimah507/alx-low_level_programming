#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t lo, size_t hi);
void array_print(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
