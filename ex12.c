#include <stdio.h>

unsigned long long factorial(int n){
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++){
      result *= i;
    }
    return result;
}

int main(){
  int number;

  printf("Enter a number between 0 and 49 to calculate its factorial: ");
  scanf("%d", &number);

  if (number < 0 || number >= 50) {
      printf("Please enter a number between 0 and 49.\n");
      return 1;
  }

  unsigned long long result = factorial(number);
  printf("Factorial of %d is %llu.\n", number, result);

  return 0;
}
