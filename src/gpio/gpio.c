#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include "gpio.h"

char buffer[64];
char aux_int[8];
char* s;
int f;

char* path(int gpio, char* file) 
{

  sprintf(aux_int, "%d", gpio); // Convert int to string

  strcpy(buffer, "/sys/class/gpio/gpio");	// Init the buffer path
  strcat(buffer, aux_int);
  strcat(buffer, "/");
  strcat(buffer, file);
  
  s = " ";
  s=buffer;
  return s;	// Return the path

}

void set_GPIO_direction(int gpio, int d) //        0 - OUTPUT      ----      1 - INPUT
{
	f = open(path(gpio, "direction"), O_RDWR);
	switch (d)
	{
		case 0:
    		write(f, "out", 3);
			break;
		case 1:
    		write(f, "in", 2);
			break;
		default:
			printf("Not a valid GPIO direction\n");
	}
    close(f);
}
