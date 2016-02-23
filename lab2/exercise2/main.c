#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#define TEMP_MIN -10
#define TEMP_MAX 35
#define FREQUENCY 5

int main()
{
	srand(time(NULL));
	int range = TEMP_MAX-TEMP_MIN;
	while(1){
		float random =(float)rand()/RAND_MAX;
		random = random*range+TEMP_MIN;
		printf("Temperature = %1.2f @",random);
		fflush(stdout);
		system("date");
		sleep(FREQUENCY);
		}
	return 0;
}

