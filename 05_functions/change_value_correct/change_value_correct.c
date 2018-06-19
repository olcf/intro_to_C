#include <stdio.h>

// Function Definition
void change_number(int *i){
  *i = 2;
  printf("Inside the function, the number's value is %d\n", *i);
}

// Main Function
int main(){

  int number = 1;
  printf("\nBefore calling the function, number = %d\n", number);

  change_number(&number);

  printf("After calling the function, number = %d\n\n", number);

  return 0;
}
