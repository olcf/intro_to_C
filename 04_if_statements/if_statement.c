#include <stdio.h>

int main(){

	int i = 1;

	// Single-line if statement 
	if(i > 0) printf("i is equal to %d, which is indeed greater than 0\n\n", i);

	// If-else statement
	if(i == 0){
		printf("i is equal to 0\n\n");
	}
	else{
		printf("Sorry, i is not equal to 0\n\n");
	}	

	// If-elseif-else statement within a while loop
	while(i < 10){

		if(i < 5){
			printf("i = %d (i < 5)\n", i);
		}
		else if(i == 5){
			printf("i is equal to 5\n", i);
		}
		else{
			printf("i = %d (i > 5)\n", i);
		}

		i++;
	}

	return 0;
}
