#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int number;

    printf("Enter a number (less than 50): ");
    scanf("%d", &number);

    if (number < 0 || number >= 50) {
        printf("Please enter a number between 0 and 49.\n");
        return 1;
    }

    unsigned long long result = factorial(number);
    
    printf("Factorial of %d is %llu\n", number, result);

    return 0;
}
