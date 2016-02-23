#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char first[20],second[20],name[60],str[20];
	printf("give a first name\n");
	scanf("%19s", first);
	printf("give a second name\n");
	scanf("%19s", second);
	
	int i= 0;
	while(second[i])
	{
		str[i]=toupper(second[i]);
		i++;
 	}
	str[i]='\0';
	name[0] ='\0';
	printf("%s\n",str);
//	printf("%s\n",name);
//	strncat(name,first,10);
//	strncat(name," ",1);
//	strncat(name,second,10);
//	printf("%s\n",name);
	int year;
	printf("give a year\n");
	scanf("%d", &year);
	snprintf(name,59,"%s %s %d",first, second, year);
	printf("%s\n",name);
	char first2[20],second2[20];
	int year2;
	sscanf( name, "%s %s %d", first2, second2,&year2);
	printf("%s %s %d\n",first2, second2, year2);


return 0;
}
