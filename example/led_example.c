#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <simpleBBB_GPIO.h>

int main () {
	set_GPIO_direction(60, 0);
	printf ("set_direction GPIO 60 -> Output\n\n");

	for (int i=0; i<10; i++)
	{
		set_GPIO_value(60,true);
		printf("%d\n", read_GPIO_value(60));
		usleep(1000000);
		
		set_GPIO_value(60,false);
		printf("%d\n", read_GPIO_value(60));
		usleep(1000000);
	}

	return 0;
}
