#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x;
int y;

int main() {
    while(x,y != -1){
  printf("Digite um número: ");
  scanf("%d", &x);
  
  printf("Digite um segundo número: ");
  scanf("%d", &y);
  
 if (x == y){
     printf("Os dois valores são iguais\n");
 } else if(x != y){
     printf("Os dois valores são diferentes\n");
 }
 if(x > y){
     printf("O número %d é maior que %d\n", x, y);
 } else if(x < y){
     printf("O número %d é menor que %d\n", x, y);
 }
if (x >= y){
    printf("O número %d é maior ou igual a %d\n", x, y);
} else if (x <= y){
    printf("O número %d é menor ou igual a %d\n", x, y);
}
 }
    return 0;
}