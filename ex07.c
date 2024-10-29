#include <stdio.h>
int main() {
    printf("%-10s %-10s %-10s\n", "Column 1", "Column 2", "Column 3" );
    printf("\n");
  
    for (int i = 1; i <= 10; i++){
  
        int col1 = i * 5;
        int col2 = 100 - ((i - 1) * 10 + 1);
        int col3 = i;

        printf("%-10d %-10d %-10d\n", col1, col2, col3);
    }

    return 0;
}

