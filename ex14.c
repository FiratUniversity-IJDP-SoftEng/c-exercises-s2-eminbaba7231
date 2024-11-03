#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

void displayFibonacciUpTo(int n) {
    printf("Fibonacci numbers up to position %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    displayFibonacciUpTo(n);

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
