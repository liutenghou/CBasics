// https://www.youtube.com/watch?v=IkyWCOUY8V4
#include <stdio.h>
#include <stdlib.h>

//asterisk says this will be accepting a memory address
void change_value(int *x); 

int main(){
	int x = 10;
	printf("The value of x is: %d\n", x);
	printf("The address of x outside of fn: %p\n", &x);
	change_value(&x);
	printf("The value of x is now: %d\n", x);


	return 0;
}

void change_value(int *p){
	*p = 15;
	//why is the value of &p different from &x?
	printf("The address of p inside of fn: %p\n", &p);
}