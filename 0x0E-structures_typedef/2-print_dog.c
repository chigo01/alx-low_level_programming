#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */

 void print_dog(struct dog *d)
 {
     if (d == NULL)
        return;
     if ((*d).name == NULL)
     {   d->name = "(nill)";
         printf("%name:%s\n", d->name);
     }

 }
