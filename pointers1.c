#include<stdio.h>
#include<stdlib.h>

int main(){

	int x = 10;
	int *p;
	p = &x;

	printf("The value of x: %d\n", x);
	printf("The address of x: %p\n", p);
	printf("The address of x: %p\n", &x);
	printf("The value of x: %d\n", *p);
	printf("The value of x: %d\n", *(&x));


	*p = 20;
	printf("The value of x: %d\n", *p);
	printf("The value of x: %d\n", x);
	return 0;

}
