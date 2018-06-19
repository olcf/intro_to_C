#include <stdio.h>

int main(){

	for(int i=0; i<10; i++){

		if(i == 7){
			break;
		}

		printf("Loop iteration: %d\n", i);
	}	

	return 0;
}
