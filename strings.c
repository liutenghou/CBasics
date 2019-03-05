#include <stdio.h>
#include <string.h>

int main(){

	char first_name[] = "John";
	char last_name[] = "Doe";
	char name[100];

	//test code
	if(strncmp(first_name, "John", 5) != 0) return 1;
	if(strncmp(last_name, "Doe", 5) != 0) return 1;

	last_name[0] = 'B';

	sprintf(name, "%s %s", first_name, last_name);

	if(strncmp(name, "John Boe", 100) == 0){
		printf("Done!\n");
	}

	return 0;
}
