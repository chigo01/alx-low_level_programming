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
     {
         d->name = "(nil)";
         printf("%name:%s\n", d->name);
     }
      if ((*d).age)
     {
         printf("%age:%d\n", d->age);
     }
      if ((*d).owner == NULL)
     {
          d->owner = "(nil)";
         printf("%name:%s\n", d->owner);
     }

 }
