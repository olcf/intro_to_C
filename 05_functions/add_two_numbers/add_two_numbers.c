#include <stdio.h>

// Function Definition
int add_numbers(int i, int j){

	int result;
	result = i + j;

	return result;
}

// Main Function
int main(){

	int num1 = 3;
	int num2 = 7;

	int sum = add_numbers(num1, num2);
	printf("The sum of num1 and num2 is %d\n", sum);

	return 0;
}
