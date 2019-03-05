#include <stdio.h>

int main(){

	int n = 10;
	int *pointer_to_n = &n;

	*pointer_to_n+=1;
	if(pointer_to_n != &n) return 1;
	if(*pointer_to_n != 11) return 1;
	
	printf("pointer value: %d\n", *pointer_to_n);
	return 0;
}
