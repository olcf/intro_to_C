#include <stdio.h>

int main(){

	float value = 1000.0;

	while(value > 1.0){
		printf("value = %f\n", value);
		value = value / 2.0;
	}

	return 0;
}
