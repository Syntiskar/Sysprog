#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define XSTR(A) STR(A)
#define STR(A) #A

#define MAX 20

int main(){
	char first[MAX+1], second[MAX+1], name[MAX*3+1]={""}, str[MAX+1];
	int birthyear;

	printf("\n|=====================================|");
	printf("\n|            String test              |");
	printf("\n|=====================================|");
	printf("\n|\n| enter first name: ");
	scanf("%"XSTR(MAX)"s",first);
	printf("|\n| enter last name: ");
	scanf("%"XSTR(MAX)"s",second);
	printf("|\n| enter birth year: ");
	scanf("%"XSTR(MAX)"d",&birthyear);

	//strcat(name, first);
	//strcat(name, " ");
        //strcat(name, second);
	snprintf(name,(MAX*3-1), "%s %s %d", first, second, birthyear);
	
	sscanf(name,"%19s %19s %19d",first,second,&birthyear);

	int i=0;
	for(;i<MAX;i++){
		str[i] = toupper(second[i]);
	}

	printf("|\n|\n| Your name is %s",name);
	printf("\n|\n| Your surname in uppercase: %s",str);
	printf("\n|\n| Your birthyear: %d\n|",birthyear);
	printf("\n|=====================================|\n\n");

	return 0;
}
