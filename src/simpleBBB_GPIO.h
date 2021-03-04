#ifndef _GPIO_LIB_
#define _GPIO_LIB_

#include <stdio.h>
#include <stdbool.h>

void simpleBBB_GPIOset(int, int);
void simpleBBB_GPIOwrite(int, bool);
int simpleBBB_GPIOread(int gpio);

#endif
