#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include "gpio/gpio.h"

int main () {

	set_GPIO_direction(60, 0)
	printf ("set_direction GPIO 60 -> Output"));
	return 0;
}
