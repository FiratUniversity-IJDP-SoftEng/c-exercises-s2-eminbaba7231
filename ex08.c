#include <stdio.h>

int main(){
  
int numbers[10];
int sum = 0;
float average;
  
printf("Enter 10 numbers :\n");
  for (int i = 0; i < 10; i++){
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }

  printf("\nYou entered:\n");
  for (int i = 0; i<10; i++) {
      printf("%d ", numbers[i]);
  }
  printf("\n");

  average = sum / 10.0;
  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", average);

  return 0;
}
