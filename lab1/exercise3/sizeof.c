#include <stdio.h>

int main(){
	printf("\n|===============================|  \n");
	printf("| int size is %zu \n",sizeof(int));
	printf("| float size is %zu \n",sizeof(float));
	printf("| double size is %zu \n",sizeof(double));
	printf("| char size is %zu \n",sizeof(char));

	printf("| long int size is %zu \n",sizeof(long int));
	printf("| long float does not exists \n");
	printf("| long double size is %zu \n",sizeof(long double));

	printf("| short int size is %zu \n",sizeof(short int));
	printf("| short float does not exist \n");
	printf("| short double does not exist \n");
	printf("|===============================|  \n\n");
	return 0;
}
