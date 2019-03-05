#include <stdio.h>

int main(){

	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int factorial = 1;
	
	int i;
	for(i = 1; i <= 10; i++){
		factorial = factorial*i;
		printf("factorial of %d: %d \n",i,factorial);
	}
}
