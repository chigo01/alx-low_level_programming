#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -function that allocates memory using malloc
 * @b the size of memory to be allocated
 *
 * Return: a pointer to the allocated memory
 */

 void *malloc_checked(unsigned int b)
 {
     int *prt = malloc(sizeof(int) * b);

     if (prt == NULL)
         exit(98);

     return (prt);
 }