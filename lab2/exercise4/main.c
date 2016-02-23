#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define FREQUENCY 5
#define MINTEMP -10
#define MAXTEMP 35

int main(){

	srand(time(NULL));
	//time_t date;
	//time(&date);
	
	while(1){
		double temperature = (double)(rand() % (MAXTEMP*100) + (MINTEMP*100)) / 100.0;
		printf("Temperature = %1.2f @",temperature);
		fflush(stdout);
		system("date");
		sleep(FREQUENCY);
	
	//printf("%s", ctime(&date));
	}
	return 0;
}
