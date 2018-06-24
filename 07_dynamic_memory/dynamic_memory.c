#include <stdio.h>
#include <stdlib.h>

int main(){

	// Statically-allocated array of floats
	int N = 5;
	float f_array[N];

	for(int i=0; i<N; i++){
		f_array[i] = 1.23*i;
	}

	for(int i=0; i<N; i++){
		printf("f_array[%d] = %f\n", i, f_array[i]);
	}

	printf("\n");

	// Dynamically-allocated array of floats
	int M = 5;
	float *f_array_dyn = malloc(M*sizeof(float));

	for(int i=0; i<M; i++){
		f_array_dyn[i] = 0.25*i;
	}

	for(int i=0; i<M; i++){
		printf("f_array_dyn[%d] = %f\n", i, f_array_dyn[i]);
	}

	for(int i=0; i<M; i++){
		printf("f_array_dyn = %f\n", i, *(f_array_dyn + i));
	}

	free(f_array_dyn);

	return 0;

}
