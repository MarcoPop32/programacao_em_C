#include <stdio.h>

int main() {
   int a;
   int b;
   
   
   for(a = 1; a<= 5; a++){
       printf("Tabela do %d\n", a);
       for(b=1; b<=10; b++){
           printf("%d x %d = %d\n", a, b, a*b);
       }
       printf("\n");
   }
    return 0;
}