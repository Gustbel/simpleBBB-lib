#ifndef _GPIO_LIB_
#define _GPIO_LIB_

#include <stdio.h>
#include <stdbool.h>

void set_GPIO_direction(int, int);
void set_GPIO_value(int, bool);
int read_GPIO_value(int gpio);

#endif
