#include<stdio.h>
    int main(){
int numbers;
int count = 0;
int total_sum = 0;

printf("Enter nummbers(if you want to finish, write -1):\n");

      while (1) {
        scanf("%d", &numbers);

        if (numbers == -1) break;
       
        count++;
        total_sum += numbers;
        }
    double average = (count > 0) ? (double)total_sum / count : 0.0;

      printf("Count: %d\n", count);
      printf("Sum of all numbers: %d\n", total_sum);
      printf("Average of all numbers: %.2f\n", average);

      return 0;
    }
