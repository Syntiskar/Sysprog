#include <stdio.h>

void swap(int **x, int **y){

	*x = (int*)((long)*x ^ (long)*y);
	*y = (int*)((long)*y ^ (long)*x);
	*x = (int*)((long)*x ^ (long)*y);
}

int main(){
	int a = 1;
	int b = 2;

	int *p = &a;
	int *q = &b;

	printf("address of p = %p and q = %p\n",p,q);
	swap(&p,&q);
	printf("address of p = %p and q = %p\n",p,q);

	return 0;
}
