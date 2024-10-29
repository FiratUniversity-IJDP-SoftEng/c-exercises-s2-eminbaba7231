#include <stdio.h>
          int main() {
 int numbers[17];
 int index =0;

 for(int i = 99; i>=51; i-=3){
    numbers[index] = i;
    index++;
   }

 printf("Numbers divisible by 3 from 100 down to 50: \n");
 
 for (int j =0; j<index; j++) {
     printf("%d", numbers[j]);
   if (j< index - 1) {
     printf("\n");
    }
  }
  printf("\n");          
}
