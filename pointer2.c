#include<stdio.h>
#include<stdlib.h>

void change_value(int x);

int main(){
	int x = 10;
	printf("The value of x is: %d\n", x);
	
	change_value(x);

	printf("The value of x is: %d\n", x);
	return 0;
}

void change_value(int x){
	x = 15;
}
